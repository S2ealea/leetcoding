/*
* Challenge 1094
* differencial 
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	



	/*Solution */
bool carPooling(int** trips, int tripsSize, int* tripsColSize, int capacity){
    int diff[MAX_TRIPS_LEN] = {0};
    for (int i=0; i<tripsSize; i++){
        diff[trips[i][1]] += trips[i][0];
        diff[trips[i][2]] -= trips[i][0];
    }

    for (int i=0; i<MAX_TRIPS_LEN; i++){
        capacity -=diff[i];
        if (capacity <0){
            return false;
        }
    }

    return true;


}


 //    //Test code
 //    int trips[2][] = 
 //    {
 //    	(2,1,5),
 //    	(3,3,7)
 //    };
 //    int capacity = 4;
 //    printf("%s\n",carPooling(trips,3,capacity) );
	// return 0;
}



