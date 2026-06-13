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
    bool isPalindrome(ListNode* head) {
            if (!head || !head->next)
        return true;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* first = head;

        while(fast != NULL && fast->next != NULL){
            slow= slow->next;
            fast=fast->next->next;
        }
        ListNode* cur = slow;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(cur!=NULL){
            next = cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        while(prev!=NULL){
            if(first->val!=prev->val){
                return false;
            }
            first=first->next;
            prev=prev->next;
        }
        return true;

    }
};