/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *temp,*odd=head,*even=head->next,*evenhead=head->next;
        int i=3;
        temp=even->next;
        while(temp!=NULL){
            if(i%2!=0){
                odd->next= temp;
                odd=odd->next;
            }
            else{
               even->next=temp; 
               even=even->next;
            }
            temp=temp->next;
            i++;
        }
        even->next=NULL;
        odd->next=evenhead;
        return head;
    }
};