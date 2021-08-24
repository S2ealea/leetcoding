/*
* Challenge 875
* The minment speed to eat the banana
* 
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	

	// Solution : binary search
	// Construct function f(x) , x as the speed of eating banana ( x/hour)
	// Time limition H is the target;
	// x's ranges from 1 to 10^9 .
	//
	int f(int* piles, int pilesSize,int x) {
    int hours = 0;
    for (int i = 0; i < pilesSize; i++) {
        hours += piles[i] / x;
        if (piles[i] % x > 0) {
            hours++;
        }
    }
    return hours;
}

int minEatingSpeed(int* piles, int pilesSize, int h){

	//Definite the left,right boundary
	int left = 1;
	int right = 1000000000+1;
	while(left < right)
	{
		int mid = left+(right-left)/2;
		if ( h == f(piles,pilesSize,mid))
		{
			right = mid;
		}
		else if ( f(piles,pilesSize,mid) < h )
		{
			right = mid;
		}
		else if ( f(piles,pilesSize,mid) > h )
		{
			left = mid+1;
		}

	}
	return left;

}


    // Test code
    int array[] = {3,6,7,11};
    printf("%d\n",minEatingSpeed(array,4,8) );

	return 0;
}