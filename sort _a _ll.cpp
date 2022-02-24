class Solution {
public:
    ListNode* mergeBoth(ListNode* first , ListNode* second){
        ListNode* ans = NULL;
        
        if(!first)return second;
        else if(!second) return first;
        
        if(first->val <= second->val){
            ans = first;
            ans->next = mergeBoth(first->next,second);
        }
        else{
            ans = second;
            ans->next = mergeBoth(first,second->next);
        }
        return ans;
    }
    void findMiddle(ListNode* curr, ListNode** first , ListNode** second){
        ListNode* slow = curr;
        ListNode* fast = curr->next;
        while(fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                slow = slow->next;
                fast = fast->next;
            }
        }
        *first = curr;
        *second = slow->next;
        slow->next = NULL;
    }
    void mergeSorting(ListNode** head){
        ListNode* curr = *head;
        ListNode* first;
        ListNode* second;
        
        if(!curr or !curr->next)return;
        findMiddle(curr,&first,&second);
        
        mergeSorting(&first);
        mergeSorting(&second);
        
        *head = mergeBoth(first,second);
    }
    ListNode* sortList(ListNode* head) {
        mergeSorting(&head);
        return head;
    }
};
