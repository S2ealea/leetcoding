/*
* Challenge 1011
* Deliver i's packet ,whose weight is weight[i] in D days
* Request: Min Ship Weight Capability
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	
    // fmax()
    int fmax(int* array,int weightsSize ){
    	int max = 0;
    	for (int i = 0; i < weightsSize; ++i)
    	{
    		if ( array[i] > max )
    		{
    			max = array[i];
    		}
    	}
    	return max;
    }

	/*Solution: binary serach */
	int shipWithinDays(int* weights, int weightsSize, int days){
		// Definite the boundary
		int left = 0;
		int right = 0;
		for (int i = 0; i < weightsSize; ++i)
		{
			left = fmax(weights,weightsSize);
			right += weights[i];
		}

		while( left < right ){
			int mid = left + (right-left)/2;
			int need = 1;     
			/*need means the days needing to deliver the packets*/
			int cur = 0;
			/*cur means the sum of the packet weight current day dilivering */
			for (int i = 0; i < weightsSize; ++i)
			{
				if ( cur+weights[i] > mid)
				{
					++need;
					cur = 0;
				}
				cur += weights[i];
			}
			if ( need <= days )
			{
				right = mid;
			}
			else if ( need > days )
			{
				left = mid+1;

			}

		}
		return left;


}




    //Test code
    int array[] = {1,2,3,4,5,6,7,8,9,10}; 
    printf("%d\n", shipWithinDays(array,10,5));
	return 0;
}