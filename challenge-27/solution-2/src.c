/*
* Challenge 27
* Remove the dedicated value in the array
*
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	
/*
* Solution 2: Two pointer traverse respectly from left to center ,right to center
* Just once traversion to achieve the goal
*/
	int removeElement(int* nums, int numsSize, int val){
	int left = 0;
	int right = numsSize-1;

	while( left <= right )            // Must be "<=", avoid lost the last swap element
	{
		if (nums[left] == val)
		{
			nums[left] = nums[right];
			right--;
		}
		else
			left++;
	}
	return left;
}

	// Test code
    int array[] = {10,23,45,20,1,30,10,30,25};
    int length = removeElement(array,9,10);
    printf("%d\n\n",length );
    for (int i = 0; i < length; ++i)
    {
    	printf("%d\n", array[i]);
    }

	return 0;
}