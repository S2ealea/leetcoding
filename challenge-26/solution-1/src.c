#include <stdio.h>

int main(int argc, char const *argv[])
{
	
/*
* Input: sequential array
* Output: length of the array removed the duplicated elements
* Function: remove the duplicated elements in the array,
* make each element appear just once.
*
*/
	int removeDuplicates(int* nums, int numsSize)
{
	
	
	for (int i = 0; i < numsSize; ++i)
	{
		for (int j = i + 1 ; j < numsSize; ++j)
		{
			if nums[j] == nums[i];
			b
		}
		/* code */
	}


}

    // Test codes
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    printf("%d\n",removeDuplicates(nums,sizeof(nums)) );	

	return 0;
}