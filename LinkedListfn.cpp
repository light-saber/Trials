/* A part of Practice
   Linked List implementation in C++ using Functions
   Creates a linked list
   Traverses a linked list
   Deletes an element from the linked list */

#include <iostream>

using namespace std;

struct node //define a structure node
{
	int data;
	struct node *next;
};

struct node* create_node(struct node *start); //Function to create a node and form a linked list
void traverse(struct node *start); //Function to traverse the linked list
struct node* delete_node(int delete_element, struct node *start); //Function to delete an element from the Linked List

int main()
{
	//char ans;
	int delete_element;
	struct node *start = NULL;
	start = create_node(start);
	cout<<"\nTraversing the nodes: ";
	traverse(start);
	cout<<"\nEnter the element to be deleted: ";
	cin>>delete_element;
	start = delete_node(delete_element,start);
	cout<<"\nTraversing the nodes: ";
	traverse(start);
	return 0;
}
struct node* create_node(struct node *start) 
{
	char ans;
	do
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
		cout<<"\nWant to enter more?(y/n) : ";
		cin>>ans;
	}
	while(ans == 'y' | ans == 'Y');
	return start;
}
void traverse(struct node *start)
{
	struct node *ptr = start;
	while (ptr != NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL\n";
//	return start;
}
struct node* delete_node(int delete_element, struct node *start)
{
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
	return start;
}



