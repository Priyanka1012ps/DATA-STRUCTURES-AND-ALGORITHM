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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head->next) return head;
        if(left == right) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* start = NULL;
        //ListNode* end = NULL;
        int idx = 1;
        while(curr && idx <= right)
        {
            if(idx == left)
            {
                start = prev;
                
            }
            prev = curr;
            curr = curr->next;
            idx++;
        }
       
        while(start->next != prev)
        {
          
            //if(!curr) cout<<prev->val << " ";
            prev->next = start->next;
            //cout<< start->next->val;
            ListNode* tmp = start->next->next;
            start->next->next = curr;
            start->next = tmp;
            curr = prev->next;
        }
        return dummy->next;
    }
};