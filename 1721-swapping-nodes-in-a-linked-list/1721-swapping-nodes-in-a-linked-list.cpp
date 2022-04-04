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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL) return head;
        ListNode *temp = head;
        ListNode *n1 = head;
        ListNode *n2 = head;
        int len = 0; 
        while(temp){len++;temp = temp->next;}
        if(len == k){
            while(n2->next){n2 = n2->next;}
            swap(n1->val, n2->val);
        }
        else{
            int i = 1,j = 1;
            while(i < k){n1 = n1->next;i++;}
            while(j < len - k + 1){n2 = n2->next;j++;}
            swap(n1->val, n2->val);
        }
        return head;
    }
};