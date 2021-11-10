int intersectPoint(Node* head1, Node* head2)
{
    int l1,l2;
    Node * temp;
    for(Node *curr=head1;curr!=NULL;curr=curr->next)
    {
        l1++;
    }
     for(Node *curr=head2;curr!=NULL;curr=curr->next)
    {
        l2++;
    }
    int diff=abs(l1-l2);
    if(l1>l2)
    {
        temp=head1;
      while(diff--)
    {
        temp=temp->next;
    } 
    if(temp==head2)
    {
        cout<<temp->data;
    }
    }
    else
    {
        temp=head2;
      while(diff--)
    {
        temp=temp->next;
    } 
    if(temp==head1)
    {
        cout<<temp->data;
    }
    }
    }
    



