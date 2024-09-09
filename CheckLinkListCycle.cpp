// Function to find out that Linked List has cycle or not by using sliding pointers
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr)
        {
            return false;
        }
        ListNode*p=head;
        ListNode*q=head->next;
        bool found=0;
        
        while(p->next!=nullptr)
        {
            p=p->next;
            if(q->next!=nullptr)
            {
            q=q->next;
            if(q->next!=nullptr)
            q=q->next;
            }
            else
            {return false;}
            if(p==q)
            {
                found=1;
                break;
            }
        }
        return found;
    }
};
