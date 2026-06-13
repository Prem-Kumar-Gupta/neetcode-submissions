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
    ListNode * midNode(ListNode *head){
ListNode* slow=head;
ListNode* fast = head;
while(fast != NULL && fast->next != NULL){
    slow=slow->next;
    fast=fast->next->next;
}
return slow;
    }
ListNode* reverseNode(ListNode* head){
    ListNode* prev=NULL;
    ListNode* next=NULL;
    ListNode* current=head;

    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
    void reorderList(ListNode* head) {

ListNode* middle=midNode(head);
ListNode* reveresedMid=reverseNode(middle);

ListNode* p=head;
ListNode* q=reveresedMid;
ListNode* temp;
while(reveresedMid!=NULL && reveresedMid->next!=NULL&&p->next!=NULL){
temp=p->next;
p->next=q;
p=q;
q=temp;
}

    }
};

