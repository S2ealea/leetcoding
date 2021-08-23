/* Brute force algorithme
* Not Accepted.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	

/*
* Input1: array
* Input2: array size
* Input3: sum k
*
* Output: nums of the subarrays which 
* sum of it's elements equals k.
*/


int subarraySum(int* nums, int numsSize, int k){
    int count = 0; // Number of the subarrays
    int start = 0;
    int end = 0;


	for( start = 0; start < numsSize; ++start )
	{
		int sum = 0;
		for ( end = start; end < numsSize; end++ )
		{
			sum += nums[end];
			printf("%d\n",sum );
			if ( sum == k )
				++count;

		}

	}
	return count;

}

    // Test code
    int array[] = {1,3,3,4,3,5,6,34,-27};
    printf("%d\n",subarraySum(array,9,7));

	return 0;
}