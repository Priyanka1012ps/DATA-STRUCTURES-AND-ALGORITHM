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
    //     unordered_map <ListNode*,bool> m;
    //     while(head)
    //     {
    //         if(m.count(head))
    //         {
    //             return true;
    //         }
    //         m[head] = 1;
    //         head = head->next;
    //     }
    //     return false;
         while(head==NULL or head->next==NULL)
             return false;
         ListNode* fast=head;
         ListNode* slow=head;
while(fast!=NULL and fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow)
        return true;
}
         return false;
     }
    
};