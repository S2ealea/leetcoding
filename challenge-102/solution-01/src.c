/*
* Challenge 102
* Traverse the binary tree layer by layer
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
 


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){

}
	return 0;
}



//   Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     struct TreeNode* left;
//     struct TreeNode* right;
// };
// #include <stdio.h>
// #include <stdlib.h>
// #define MaxSize 1000
// /**
//  * Return an array of arrays of size *returnSize.
//  * The sizes of the arrays are returned as *returnColumnSizes array.
//  * Note: Both returned array and *columnSizes array must be malloced, assume
//  * caller calls free().
//  */
// void helper(struct TreeNode* root, int** result, int* ColumnSizes, int i, int* maxh) {
//     if (root != NULL) {
//         result[i][ColumnSizes[i]] = root->val;
//         ColumnSizes[i]++;
//         if(i+1>*maxh)
//             *maxh = i+1;
//         helper(root->left, result, ColumnSizes, i + 1, maxh);
//         helper(root->right, result, ColumnSizes, i + 1, maxh);
//     }
// }
// int** levelOrder(struct TreeNode* root,
//                  int* returnSize,
//                  int** returnColumnSizes) {
//     int** result = (int**)malloc(sizeof(int*) * MaxSize);
//     int i;
//     for (i = 0; i < MaxSize; i++)
//         result[i] = (int*)malloc(sizeof(int) * MaxSize);
//     *returnColumnSizes = (int*)calloc(MaxSize, sizeof(int));
//     *returnSize = 0;
//     if(root==NULL)
//         return NULL;
//     helper(root, result, *returnColumnSizes, 0, returnSize);
//     return result;
// }


// 作者：one_ice
// 链接：https://leetcode-cn.com/problems/binary-tree-level-order-traversal/solution/c-di-gui-die-dai-by-shi-huang-2/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。