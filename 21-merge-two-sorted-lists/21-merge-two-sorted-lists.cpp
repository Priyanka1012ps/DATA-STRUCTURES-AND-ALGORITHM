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
    //     ListNode *merge(ListNode *a, ListNode *b) {
//         if(!a && !b)
//             return NULL;
//         else if(!a)
//             return b;
//         else if(!b)
//             return a;
        
//         ListNode *temp;
//         if(a->val < b->val) {
//             temp = merge(a->next, b);
//             a->next = temp;
//             return a;
//         }
//         else 
//         {
//             temp = merge(a, b->next);
//             b->next = temp;
//             return b;
            
//         }
//     }
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
//         return merge(list1, list2);
        
    // }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val > l2->val)
            std::swap(l1,l2);
        ListNode* res= l1;
        while(l1!=NULL and l2!=NULL)
        {
            ListNode* temp=NULL;
            while(l1 !=NULL and l1->val <= l2->val)
            {
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            std::swap(l1,l2);
        }
        return res;
    }
};