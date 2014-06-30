/* Problem Statement: Given a linked list, swap consecutive elements. 
   If there are odd number of nodes, leave the last node

   Ex: Input: 3->5->7->12->14->15->17->NULL
       Ouptut: 5->3->12->7->14->15->17->NULL
*/       

//Created by light-saber
//2014.06.30

#include <iostream>

using namespace std;

struct node //define a structure node
{
	int data;
	struct node *next;
};

struct node* create_node(struct node *start); //Function to create a node and form a linked list
void traverse(struct node *start); //Function to traverse the linked list

int main()
{
	int delete_element;
	struct node *start = NULL;
	start = create_node(start);
	cout<<"\nTraversing the nodes: ";
	traverse(start);
	struct node *ptra, *ptrb;
	ptra = start;
	ptrb = start->next;
	do
	{
		ptra->data = ptra->data + ptrb->data;
		ptrb->data = ptra->data - ptrb->data;
		ptra->data = ptra->data - ptrb->data;
		ptra = ptra->next->next;
		ptrb = ptrb->next->next;
		if (ptra->next->next == NULL | ptrb->next->next == NULL)
			break;
	}
	while(ptra->next != NULL | ptrb->next != NULL);
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
}




