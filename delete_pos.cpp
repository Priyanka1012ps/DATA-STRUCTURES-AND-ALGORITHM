#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head=NULL;
void delete_pos(node *ptr)
{
    node *temp;
    temp=ptr->link;
     ptr->data=temp->data;
    ptr->link=temp->link;
   
    free(temp);
    
}
void insertend(int d)
{
    node *ptr=new node();
    ptr->data=d;
    ptr->link=NULL;
    if(head==NULL)
    {
    head =ptr;
    }
    else
    {
        node *temp;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr;
        
    }
}
 void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<endl;
    }
int main()
{
   
      insertend(1);
          insertend(2);
           insertend(3);
            insertend(4);
            display();
        
            
            delete_pos(& 2);
              display();
            
            
}
