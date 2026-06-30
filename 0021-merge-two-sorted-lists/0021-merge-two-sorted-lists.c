/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* list=NULL,*head=NULL,*temp=head,*temp1,*temp2,*newnode;
    if(list1==NULL && list2==NULL){
        return head;
    }
    temp1=list1,temp2=list2,temp=list;
    while(temp1!=NULL && temp2!=NULL){
        newnode=malloc(sizeof(struct ListNode));
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        newnode->next=NULL;
        if(temp1->val<=temp2->val){
        newnode->val=temp1->val;
        temp1=temp1->next;
        }
        else{
             newnode->val=temp2->val;
             temp2=temp2->next;
        }
}
    while(temp1!=NULL){
        newnode=malloc(sizeof(struct ListNode));
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        newnode->next=NULL;
        newnode->val=temp1->val;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
       newnode=malloc(sizeof(struct ListNode));
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        newnode->next=NULL;
        newnode->val=temp2->val;
        temp2=temp2->next;
    }
    return head;
}