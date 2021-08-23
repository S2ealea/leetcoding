/*
* Challenge 704 : binary search
* Search the target in the sequential array
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
/* Input 1 : sequential array
*  Input 2 : array size
*  Input 3 : target to search
*  Output  : the index of the target if exist;
*  else -1 .
* 
*  Notions: Must be carefully wiht the boundary
*/

int search(int* nums, int numsSize, int target){
		int left,right,mid;
		left = 0;
		right = numsSize-1;

		while(left <= right)
		{
			mid = left+(right-left)/2;
			if ( target == nums[mid] )
			{
				return mid;
			}
			else if ( nums[mid] < target )
			{
				left = mid+1;
			}
			else if ( nums[mid] > target )
			{
				right = mid-1;
			}
		}
		return -1;
}
	





	// Test code
	int array[] = {1,3,5,7,9,11,12,14,16,18,20,22};
	int index = search(array,12,11);
	printf("%d\n",index);



	return 0;
}