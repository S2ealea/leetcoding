/*
* Challenge 111
* Find the binary tree min depth
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	


	/*Solution */
/* Definition for a binary tree node.*/
    struct TreeNode {
    	int val;
    	struct TreeNode *left;
    	struct TreeNode *right;
 };
 


int minDepth(struct TreeNode* root){
	if (root == NULL){
		return 0;
	}

	if (root->left == NULL){
		return minDepth(root->right)+1;
	}

	if (root->right == NULL){
		return minDepth(root->left)+1;
	}

    int left = minDepth(root->left);
    int right = minDepth(root->right);

    return (left < right ? left : right) + 1;

}
	return 0;
}