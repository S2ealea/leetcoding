/*
* Challenge 701
* Insert into BST
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	


	/*Solution*/

 /* Definition for a binary tree node.*/
    struct TreeNode {
    	int val;
        struct TreeNode *left;
        struct TreeNode *right;
  };
 


struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
	if (root == NULL)
	{
		struct TreeNode* newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->val = val;
		return newnode;	
	}

	// if (root->val == val) //No action

	if (root->val < val){
		root->right = insertIntoBST(root->right,val);
	}

	if (root->val > val){
		root->left = insertIntoBST(root->left,val);
	}
	return root;

}
	return 0;
}