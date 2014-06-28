/* A part of practice 
   Trying out some basic codes
   This code in C++ initialises a linked list
   Traverses a linked list
   Deletes an element from the linked list 
   I have'nt used functions here
   Will use them in the next code */

#include <iostream>

using namespace std;

struct node //define a structure node
{
	int data;
	struct node *next;
};

int main()
{
	char ans;
	struct node *start = NULL;
	do //Inserting
	{
		struct node *newnode, *current;
		newnode = (struct node *) malloc (sizeof(struct node)); //create a new node
		cout<<"\nEnter a value: ";
		cin>>newnode->data;
		newnode->next = NULL;
		if(start == NULL)
		{
			start=newnode;
			current=newnode;
		}
		else
		{
			current->next=newnode;
			current=newnode;
		}
		cout<<"\nWant to insert more? (y/n)";
		cin>>ans;
	}
	while (ans == 'y' | ans == 'Y');

	cout<<"\n\nDisplaying the elements of the list\n\n"; //Traversing
	struct node *ptr = start;
	while (ptr != NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL\n";
	int delete_element;
	cout<<"\n\nEnter the element you wish to delete: "; //Deleting
	cin>>delete_element;
	if (delete_element == start->data) //Check if the first element is the one to be deleted
		start = start->next;
	struct node *ptr1 = start;
	struct node *ptrprev = start;
	while (ptr1 != NULL)
	{
		if (delete_element == ptr1->data)
		{
			ptrprev->next=ptr1->next; //Delete operation
			break;
		}
		ptrprev=ptr1;
		ptr1=ptr1->next;		
	}
	cout<<"\n\nThe new linked list is: \n"; //Traversing the new linked list
	struct node *ptr2 = start;
	while (ptr2 != NULL)
	{
		cout<<ptr2->data<<"->";
		ptr2=ptr2->next;
	}
	cout<<"NULL\n";

	//End

}


