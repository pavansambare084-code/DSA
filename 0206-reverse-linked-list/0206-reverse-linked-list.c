/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev=head,*temp,*nextnode;
    if(head==NULL){
        return head;
    }
    temp=head->next;
    prev->next=NULL;
    while(temp!=NULL){
        nextnode=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextnode;
    }
    return prev;
}