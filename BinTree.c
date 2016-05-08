/*
Stu.Name : Choi Nack Yeon
Stu.Num : 21200761
Date : 2016.05.08
*/
#include <stdio.h>
#include "BinTree.h"

TreeNode* MakeBT(TreeNode *left, char data, TreeNode *right)      // Function of Make TreeNode(left, data, right)
{
	TreeNode* root = (TreeNode*) malloc (sizeof(TreeNode));

	if(root==NULL)
		printf("Failure of allocating memory\n");                 // Check the allocation of memory
	
	root->data=data;                                              // input data in node
	root->left=left;
	root->right=right;
}

void FreeBT(TreeNode *root, int level)                            // Function of deallocating memory
{
	if(root==NULL)
		return;
	else                                                          // Free() of all node by using recursive funtion
	{
		FreeBT(root->left,level+1);
		FreeBT(root->right,level+1);
		PrintTab(level);
		printf("Deleting %c,level %d\n",root->data,level);
		free(root);
	}
}

void Inorder(TreeNode *root, int level)                           // Inorder traversal(visit root node in middle)
{
	int i=0;

	if(root==NULL)
	{
		for(i=0;i<level;i++)
			printf("\t");
		printf("Inorder(NULL,%d)\n",level);
	}
	else
	{
		Inorder(root->left,level+1);
		for(i=0;i<level;i++)
			printf("\t");
		printf("Inorder(%c,%d)\n",root->data,level);
		Inorder(root->right,level+1);
	}
}

void Preorder(TreeNode *root, int level)                          // Preorder traversal(visit root node first)
{
	int i=0;

	if(root==NULL)
	{
		for(i=0;i<level;i++)
			printf("\t");
		printf("Preorder(NULL,%d)\n",level);
	}
	else
	{			
		for(i=0;i<level;i++)
			printf("\t");
		printf("Preorder(%c,%d)\n",root->data,level);
		Preorder(root->left,level+1);
		Preorder(root->right,level+1);
	}
}


void Postorder(TreeNode *root, int level)                         // Postorder traversal(visit root node last)
{	
	int i=0;

	if(root==NULL)
	{
		for(i=0;i<level;i++)
			printf("\t");
		printf("Postorder(NULL,%d)\n",level);
	}
	else
	{			
		Postorder(root->left,level+1);
		Postorder(root->right,level+1);
		for(i=0;i<level;i++)
			printf("\t");
		printf("Postorder(%c,%d)\n",root->data,level);
	}
}

void PrintTab(int level)                                         // count level and print tab(\t) depending on level
{
	int i=0;

	for(i=0;i<level;i++)
		putchar('\t');
}