/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
//  */
// class Solution {
// public:
//     bool isPalindrome(ListNode* head)
//     {
//         ListNode*temp=head;
//          if(head->next==NULL){
//         return 1;
//              int num=0;
//              while(temp!=NULL)
//              {
//                  num=num*10+temp->val;
//                  temp=temp->next;
//              }
//              int c;
//              int rev=0;
//              for(int i=num;i>0;i=i/10)
//              {
//                  c=i%10;
//                  rev=rev*10+c;
//              }
//              if(rev==num)
//              {
//                  return true;
//              }
             
//     }
//         return false;
//     }
        
                 
// };
class Solution {
public:
  ListNode* reverseList(ListNode* node)
    {
        ListNode* curr=node;
        ListNode* prev= NULL;
       
        ListNode* temp;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next= prev;
            prev=curr;
            curr= temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // vector<int> v;
        // ListNode* ptr=head;
        // while(ptr)
        // {
        //     v.push_back(ptr->val);
        //     ptr=ptr->next;
        // } 
        // vector<int> v1;
        // v1=v;
        // reverse(v.begin(),v.end());
        // if(v==v1)
        //     return true;
        // return false;
        while(head==NULL or head->next==NULL)
            return true;
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
        
    }
};