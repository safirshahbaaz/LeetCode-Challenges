result = []
    def createPlan(self, airport_list, airport):
        #print airport
        #result = []
        if airport in airport_list.keys():
            while airport_list[airport] != []:
                self.createPlan(airport_list, airport_list[airport].pop())
        self.result.append(airport)
        
        #return result[::-1]
        
    def findItinerary(self, tickets):
        """
        :type tickets: List[List[str]]
        :rtype: List[str]
        """
        airports = {}
        for start, end in sorted(tickets)[::-1]: #Sorting the flights alphabetically and taking the reverse of the sorted list
            if start not in airports.keys():
                airports[start] = [end]
            else:
                airports[start].append(end)
                
        self.createPlan(airports, 'JFK')
        return self.result[::-1]
