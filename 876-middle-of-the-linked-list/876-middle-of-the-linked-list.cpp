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
    ListNode* middleNode(ListNode* head) 
    {
//   BRUTE FORCE
     // ListNode* temp=head;
     //    int c=0;
     //    while(temp!=NULL)
     //    {
     //        temp=temp->next;
     //        c++;
     //    }
     //    cout<< c;
     //    int half=c/2;
     //    int l=0;
     //    ListNode* final= head;
     //    while(l!=half)
     //    {
     //        final=final->next;
     //        l++;
     //    }
     //    return final;
        
//         SLOW AND FAST POINTER
        ListNode* slow = head;
        ListNode* fast = head;
        while( fast!=NULL && fast->next!=NULL   )
        {
            slow =slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};