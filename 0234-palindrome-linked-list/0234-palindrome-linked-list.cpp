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
    ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr != nullptr) {
        ListNode* next = curr->next;
        curr->next = prev;           
        prev = curr;
        curr = next;
    }

    return prev;
}
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast= head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=(fast->next)->next;
        }
        ListNode * h1=reverseList(slow);
        while(head!=NULL && h1!=NULL){
            if(h1->val==head->val){
                h1=h1->next;
                head=head->next;
            }
            else{
                return 0;
            }
        }
    return 1;
    }
};