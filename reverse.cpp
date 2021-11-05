#include <bits/stdc++.h>
using namespace std;

    struct node
    {
        int data;
        node *link;
    };
    node *head=NULL;
    void reverse()
    {
        node *n;
        node *p=NULL;
        node *c=head;
        while(c!=NULL)
        {
          n=c->link;
          c->link=p;
          p=c;
          c=n;
        }
        head=p;
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
    void insertend(int d)
    {
        node *temp=head;
        node *ptr=new node();
        ptr->data=d;
        ptr->link=NULL;
        if(head==NULL)
        {
            head=ptr;
        }
        else
        {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr;
        
        
    }
    }
    
    int main()
    {
         insertend(1);
          insertend(2);
           insertend(3);
            insertend(4);
            display();
            reverse();
            display();
    }
