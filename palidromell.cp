class Solution{
  public:
    bool isPalindrome(Node *head)
    {
        
     Node *slow,*fast;
     slow=fast=head;
     while(fast!=NULL&&fast->next!=NULL)
     {
         slow=slow->next;
         fast=fast->next->next;
     }
     
    Node*prev,*c,*n;
     prev=NULL;
     c=slow;
     
     while(c!=NULL)
     {
         n=c->next;
         c->next=prev;
         prev=c;
         c=n;
         
     }
     while(prev!=NULL)
     {
    if(prev->data!=head->data)
    {
        return false;

    }
            head=head->next;
        prev=prev->next;

    
   
     }
      return true;
    }
};
