#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void find(int n)
{
    int len=0;
    for(node*curr=head;curr!=NULL;curr=curr->next)
    {
        len++;
    }
    node *curr=head;
    for(int i=1;i<len-n+1;i++)
    {
        curr=curr->next;
    }
    cout<<(curr->data)<<" ";
}
void insertend(int d)
{
    node *ptr=new node();
    ptr->data=d;
    ptr->next=NULL;
    if(head==NULL)
    {
    head =ptr;
    }
    else
    {
        node *temp;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        
    }
}
 void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
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
        
            
            
            
            
}
