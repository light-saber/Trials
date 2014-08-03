#include "iostream"

using namespace std;
/*
Output:
1 2 4 
1 2 5 
1 3 
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
}

void printPaths(struct node*);
void printArray(int [], int);
void printPathsRecur(struct node*, int [], int);


void printPaths(struct node* node)
{
	int path[1000];
	printPathsRecur(node, path, 0);
}

void printPathsRecur(struct node* node, int path[], int pathlen)
{
	if (node == NULL)
		return;
	path[pathlen] = node->data;
	pathlen++;
	if(node->right==NULL && node->left==NULL)
		printArray(path, pathlen);
	else
	{
		printPathsRecur(node->left, path, pathlen);
		printPathsRecur(node->right, path, pathlen);
	}
}

void printArray(int ints[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		cout<<ints[i]<<" ";
	}
	cout<<"\n";
}

int main(int argc, char const *argv[])
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	printPaths(root);
	return 0;
}
