// Create a simple Binary Tree

#include <stdio.h>
#include <iostream.h>

using namespace std;

struct node  //Node Structure
{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data) //Creating new node
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;n
	node->left = NULL;
	node->right = NULL;
	return(node);
}

int main()
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4); 
	return 0;
}
