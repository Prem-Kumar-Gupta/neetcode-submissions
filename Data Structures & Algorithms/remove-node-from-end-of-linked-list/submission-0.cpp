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
    int nodeCount(ListNode* head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)return NULL;
        ListNode* current=head;
        int count = nodeCount(head);
        int index = count-n;
        int i = 0;

         if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        while(i<index-1){
            current=current->next;
            i++;
        }
        if(current==NULL){
         return head;
        }
        ListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
        return head;
        
    }
};