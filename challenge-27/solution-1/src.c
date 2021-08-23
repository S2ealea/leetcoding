/*
* Remove the dedicated value in the array
*
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	
/*
* The solution 1: two pointer traversing
* Input1: array
* Input2: array size
* Input3: the value needed to remove
*/
	int removeElement(int* nums, int numsSize, int val){
		int left = 0;
		int right = 0;
		for (; right < numsSize; right++)
		{
			if (nums[right] != val)
			{
				nums[left] = nums[right];
				left++;
			}
		}

		return (left);
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