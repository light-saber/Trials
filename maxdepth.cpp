#include <iostream>

using namespace std;

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
}

int maxDepth(struct node* node)
{
	if (node == NULL)
		return 0;
	else
	{
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);
		if(lDepth > rDepth)
			return(lDepth+1);
		else
			return(rDepth+1);
	}
}

int main(int argc, char const *argv[])
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	cout<<"\nThe Depth of the Tree is: "<<maxDepth(root);
	return 0;
}
