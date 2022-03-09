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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* res=NULL;
        ListNode* ptr=NULL;
        while(head) {
           if(head->next && head->val==head->next->val) {
               while(head->next && head->val==head->next->val)
                   head=head->next;
           }
            else {
                if(!ptr) {
                    ptr=head;
                    res=head;
                }
                else {
                ptr->next=head;
                ptr=ptr->next;
                }
            }
            head=head->next;
        }
        if(ptr)
        ptr->next=NULL;
     return res;
    }
};
