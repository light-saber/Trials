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
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}

int identicalTrees(struct node* a, struct node* b)
{
	if (a==NULL && b==NULL)
		return 1;

	if (a!=NULL && b!=NULL)
	{
		return ( a->data == b->data && identicalTrees(a->left, b->left) && identicalTrees(a->right, b->right));
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	struct node *root1 = newNode(1);
	struct node *root2 = newNode(1);
	root1->left = newNode(2);
	root2->left = newNode(2);
	root1->right = newNode(3);
	root2->right = newNode(3);
	root1->left->left = newNode(4);
	root2->left->left = newNode(4);
	root1->left->right = newNode(5);
	root2->left->right = newNode(5);

	if (identicalTrees(root1, root2))
		cout<<"\nThe Trees are identical";
	else
		cout<<"\nThe Trees are not identical";
	return 0;
}
