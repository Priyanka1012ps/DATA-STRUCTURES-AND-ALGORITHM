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
    void deleteNode(ListNode* node) 
    {
        int a= node->next->val;
        ListNode* temp;
       temp= node->next->next;
        node->val=a;
        node->next =temp;
    }
};