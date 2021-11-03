#include <bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *link;
};
node *head = NULL;
void
insert_atbegin (int d)
{
  node *ptr = new node ();
  ptr->data = d;

  ptr->link = head;
  head = ptr;
}

void
insertend (int d)
{
  node *ptr = new node ();
  ptr->data = d;
  ptr->link = NULL;
  
  if (head == NULL)
    {
      head = ptr;
    }
  else
    {
      node *temp = head;
      if (temp != NULL)
	{
	  temp = temp->link;

	}
      temp->link = ptr;

    }
}

void
display ()
{
  node *temp = head;
  while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->link;
    }
}

int
main ()
{
  insert_atbegin(10);
  insert_atbegin(20);
  insertend (50);
  insertend (60);
  display ();
}
