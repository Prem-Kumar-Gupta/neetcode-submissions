/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         if (!head) return NULL; 
    Node *current = head;
    while (current != NULL)
    {
        Node *temp = current->next;
        current->next =new Node(current->val);
        current->next->next = temp;
        current = temp;
    }
    current=head;
    while (current != NULL)
    {
        if (current->next != NULL)
        {
            current->next->random = (current->random != NULL) ? current->random->next : NULL;
        }
        current = current->next->next;
    }
    Node* org = head;
    Node* copy=head->next;
    Node* temp=copy;
    while(org!=NULL){
org->next=org->next->next;
 if (copy->next != NULL) {
                copy->next = copy->next->next;
            }
org=org->next;
copy=copy->next;
    }
    return temp;
    
    }
};
