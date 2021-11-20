#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *link;

};
node *head = NULL;
void insert(int d)
{
    node *ptr= new node ();
    ptr->data=d;
   ptr->link=head;
    head = ptr;
   
    
}

void mid()
{
    if(head==NULL)
    {
        cout<<"empty list";
    }
    else
    {
        node *slow=head, *fast=head; //floyd
        while(fast!=NULL&&fast->link!=NULL)
        {
            slow=slow->link;
            fast=fast->link->link;
        }
        cout<<"middle element"<<slow->data;
    }
}
void display()
{
    
        node *temp =head;
    while(temp->link!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->link;
    
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    mid();
}
