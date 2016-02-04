/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode* oddHead = head;
    struct ListNode* evenHead;
    struct ListNode* temp1, *temp2, *temp3, *temp4;
    temp1 = oddHead;
    temp3 = oddHead;
    
    if(head == NULL){
        //printf("NULL case");
        return NULL;
    }
    
    evenHead = head->next;
    temp4 = evenHead;
    temp2 = evenHead;
    
    if(temp4 == NULL){
        return temp1;
    }
    
    while(temp3->next != NULL || temp4->next != NULL){
        if(temp4->next != NULL){
            temp3->next = temp4->next;
            temp3 = temp3->next;
        }
        else{
            temp3->next = NULL;
        }
        if(temp3->next != NULL){
            temp4->next = temp3->next;
            temp4 = temp4->next;
        }
        else{
            temp4->next = NULL;
        }
    }
    temp3->next = temp2;
    return temp1;
}
