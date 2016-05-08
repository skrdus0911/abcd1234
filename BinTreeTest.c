/*
Stu.Name : Choi Nack Yeon
Stu.Num : 21200761
Date : 2016.05.08
*/
#include "BinTree.h"
#include <stdio.h>

int main()
{
	TreeNode *A = MakeBT(NULL,'A',NULL);                   // Make TreeNode "A,B,C,D,E"
	TreeNode *B = MakeBT(NULL,'B',NULL);
	TreeNode *C = MakeBT(A,'C',B);
	TreeNode *D = MakeBT(NULL,'D',NULL);
	TreeNode *E = MakeBT(C,'E',D);

	printf("=== Inorder traversal:\n");
	Inorder(E,1);

	printf("\n=== Preorder traversal:\n");
	Preorder(E,1);

	printf("\n=== Postorder traversal:\n");
	Postorder(E,1);

	printf("\n===Deleting tree:\n");
	FreeBT(E,1);

	return 0;
}