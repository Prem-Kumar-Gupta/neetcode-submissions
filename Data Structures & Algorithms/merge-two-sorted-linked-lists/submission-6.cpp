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
  ListNode* mergeTwoLists(ListNode* l1 , ListNode* l2){
    struct ListNode* p =l1;
    struct ListNode* q =l2;
    ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = -1;
    dummy->next = NULL;
    struct ListNode* tail = dummy;

    while(q!=NULL && p!=NULL){
        if(p->val<q->val){
            tail->next =p;
            p=p->next;
        }
        else{
            tail->next =q;
            q=q->next;
        }
        tail=tail->next;
    }
    p!=NULL?tail->next =p:tail->next=q;
    ListNode * mergeList=dummy->next;
    free(dummy);
    return mergeList;
  }
};
