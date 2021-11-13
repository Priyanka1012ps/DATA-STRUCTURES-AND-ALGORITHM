class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
    int countarr[]={0,0,0};
    Node *curr=head;
    while(curr!=NULL)
    {
        countarr[curr->data]++;
        curr=curr->next;
    }
    Node *temp=head;
    int i=0;
    while(temp!=NULL)
    {
    if(countarr[i]==0)
    i++;
    else
    {
        temp->data=i;
        temp=temp->next;
        countarr[i]--;
    }
    
        
    }
    return head;
    }
};
