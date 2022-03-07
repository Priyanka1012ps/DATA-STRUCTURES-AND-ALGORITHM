class Solution {
public:
    
    ListNode *merge(ListNode *a, ListNode *b) {
        if(!a && !b)
            return NULL;
        else if(!a)
            return b;
        else if(!b)
            return a;
        
        ListNode *temp;
        if(a->val < b->val) {
            temp = merge(a->next, b);
            a->next = temp;
            return a;
        }
        else 
        {
            temp = merge(a, b->next);
            b->next = temp;
            return b;
            
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        return merge(list1, list2);
        
    }
};