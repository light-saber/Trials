#include <iostream>

using namespace std;
/*
Output: 
Deleting node: 4
Deleting node: 5
Deleting node: 2
Deleting node: 3
Deleting node: 1

Tree Deleted.
*/
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
};

void _deletetree(struct node* node)
{
	if (node == NULL)
		return ;
	_deletetree(node->left);
	_deletetree(node->right);
	cout<<"\nDeleting node: "<<node->data;
	free(node);
}

int main(int argc, char const *argv[])
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	_deletetree(root);
	root = NULL;
	cout<<"\n\nTree Deleted."; 
	return 0;
}
