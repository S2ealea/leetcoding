/*
* Challenge 700
* Search the definite value in BST 
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	




	/*Solution*/
  /*Definition for a binary tree node.*/
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 


struct TreeNode* searchBST(struct TreeNode* root, int val){
	if (root == NULL ) return NULL;
	// if ( root->val == val)
	// 	return root;
	if (root->val < val)
		return searchBST(root->right,val);
	if (root->val > val)
		return searchBST(root->left,val);
	return root;
}
	return 0;
}