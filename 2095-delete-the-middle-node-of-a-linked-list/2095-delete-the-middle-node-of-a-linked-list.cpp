class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* slowPrev = head;
        while(fast && fast->next){
            slowPrev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(slow!=head && slowPrev->next ) slowPrev->next=slowPrev->next->next;
        else head = NULL;
        return head;
    }
};