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

    if(head==NULL || head->next==NULL) return head;
    
    ListNode* ptr=head;
    int length=0;
    
    while(ptr!=NULL){
        length++;
        ptr=ptr->next;
    }
    
    k=k%length;
    
    while(k--){
        
        ptr=head;
        ListNode* temp=NULL;
        
        while(ptr->next!=NULL){
            temp=ptr;
            ptr=ptr->next;
        }
        
        ptr->next=head;
        temp->next=NULL;
        head=ptr;
    }
    return head;
}
};