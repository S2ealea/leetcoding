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
int removeDuplicates(int* nums, int numsSize){
	if (numsSize == 0)
		return 0;

    int fast = 1,slow = 1;
	while ( fast < numsSize )
	{
   		if (nums[fast] != nums[fast-1]) {
   			nums[slow] = nums[fast];
   			++slow;
   		}
   		++fast;
   	}
	return slow;  
	}

    // Test codes
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    printf("%d\n",removeDuplicates(nums,10) );	

	return 0;
}