/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *prev,*temp=head;
    if(head==NULL){
        return head;
    }
    while(temp!=NULL){
        if(temp->val==val&& temp==head){
            head=temp->next;
            free(temp);
            temp=head;
        }
        else if(temp->val==val ){
            prev->next=temp->next;
            free(temp);
            temp=prev->next;
        }
        else{
            prev=temp;
            temp=temp->next;
        }
    }
    return head;
}