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
ListNode* rotateRight(ListNode* head, int k) {

//     if(head==NULL || head->next==NULL) return head;
    
//     ListNode* ptr=head;
//     int length=0;
    
//     while(ptr!=NULL){
//         length++;
//         ptr=ptr->next;
//     }
    
//     k=k%length;
    
//     while(k--){
        
//         ptr=head;
//         ListNode* temp=NULL;
        
//         while(ptr->next!=NULL){
//             temp=ptr;
//             ptr=ptr->next;
//         }
        
//         ptr->next=head;
//         temp->next=NULL;
//         head=ptr;
//     }
//     return head;
    if(head==NULL or head->next==NULL or k==0)
        return head;
    ListNode*curr=head;
    int l=1;
    while(curr!=NULL and curr->next!=NULL)
    {
        curr=curr->next;
        l++;
    }
    curr->next=head;
    k=k%l;
    k = l-k;
    while(k--)
    {
        curr=curr->next;
    }
    head=curr->next;
    curr->next=NULL;
    return head;
}
};