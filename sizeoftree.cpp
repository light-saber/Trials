#include <iostream>

/* 
Output:
Preorder Traversal: 
1 2 4 5 3 
Postorder Traversal: 
4 5 2 3 1 
Inorder Traversal: 
4 2 5 1 3 
Size of the Tree:
5
*/

using namespace std;

struct node
{
	/* data */
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;	
	return(node);
}

void printPostorder(struct node* node)
{
	if (node == NULL)
		return;
	printPostorder(node->left);
	printPostorder(node->right);
	cout<<node->data<<" ";
}

void printPreorder(struct node* node)
{
	if(node == NULL)
		return;
	cout<<node->data<<" ";
	printPreorder(node->left);
	printPreorder(node->right);
}

void printInorder(struct node* node)
{
	if(node == NULL)
		return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}

int size(struct node* node)
{
	if (node == NULL)
		return 0;
	else
		return (size(node->left) + 1 + size(node->right));
}

int main(int argc, char const *argv[])
{
	struct node *root = newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	cout<<"\nPreorder Traversal: \n";
	printPreorder(root);
	cout<<"\nPostorder Traversal: \n";
	printPostorder(root);
	cout<<"\nInorder Traversal: \n";
	printInorder(root);
	cout<<"\nSize of the Tree:\n"<<size(root);

	return 0;
}



