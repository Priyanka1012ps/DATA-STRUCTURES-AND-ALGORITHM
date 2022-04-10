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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* ptr=head;
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        } 
        vector<int> v1;
        v1=v;
        reverse(v.begin(),v.end());
        if(v==v1)
            return true;
        return false;
    }
};