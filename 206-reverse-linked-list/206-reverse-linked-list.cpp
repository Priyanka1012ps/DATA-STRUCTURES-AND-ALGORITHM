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
    ListNode* reverseList(ListNode* head) 
    {
        // ListNode* curr= head;
        // ListNode* prev= NULL;
        // ListNode* temp;
        // while(curr!=NULL)
        // {
        //     temp=curr->next;
        //     curr->next= prev;
        //     prev=curr;
        //     curr= temp;
        // }
        // return prev;
        if(head==NULL)
            return head;
       return reverse(head);
        
    }
    ListNode* reverse(ListNode* head)
    {
        if(head->next==NULL)
            return head;
       ListNode* reverseHead= reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return reverseHead;
    }
};