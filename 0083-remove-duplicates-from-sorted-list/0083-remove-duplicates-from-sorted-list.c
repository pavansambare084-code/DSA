/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp=head,*nxt;
    if(temp==NULL){
        return head;
    }
    while(temp->next!=NULL){
        nxt=temp->next;
        if(temp->val==nxt->val){
            temp->next=nxt->next;
            nxt=nxt->next;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}