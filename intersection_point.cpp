
    int intersectPoint(Node* head1, Node* head2)
{
    int l1=0,l2=0;
    Node * curr1 =head1; 
    Node *curr2 = head2;
    while(curr1!=NULL)
    {
       curr1=curr1->next;
        l1++;
    }
    while(curr2!=NULL)
    {
       curr2=curr2->next;
        l2++;
    }
     
   Node  *temp1=head1;
      Node *temp2=head2;
    int diff=abs(l1-l2);
    if(l1>l2)
    {
        
      while(diff--)
    
        temp1=temp1->next;
    
    }
   
    else if(l2>l1)
    {
       
      while(diff--)
    
        temp2=temp2->next;
     
    }
    while(temp1!=temp2)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1)
    {
        return temp1->data ;
    }

    return -1;
}
    
    



