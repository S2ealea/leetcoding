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
    int location[1001] = {0};
    int passenagers= 0;
    int startPos = 0;
    int endPos = 0;
    int i;
    for (i = 0; i < tripsSize; i++) {
        passenagers = trips[i][0];
        startPos = trips[i][1];
        endPos = trips[i][2];
        location[startPos] = location[startPos] + passenagers;
        location[endPos] = location[endPos] - passenagers;
    }
    passenagers = 0;
    for (i = 0; i < 1001; i++) {
        passenagers += location[i];
        if(passenagers > capacity){
            return false;
        }
    }
    return true;
}


    //Test code
    int trips[2][] = 
    {
    	(2,1,5),
    	(3,3,7)
    };
    int capacity = 4;
    printf("%s\n",carPooling(trips,3,capacity) );
	return 0;
}




// //C语言解法：
// bool carPooling(int** trips, int tripsSize, int* tripsColSize, int capacity){
//     int location[1001] = {0};
//     int passenagers= 0;
//     int startPos = 0;
//     int endPos = 0;
//     int i;
//     for (i = 0; i < tripsSize; i++) {
//         passenagers = trips[i][0];
//         startPos = trips[i][1];
//         endPos = trips[i][2];
//         location[startPos] = location[startPos] + passenagers;
//         location[endPos] = location[endPos] - passenagers;
//     }
//     passenagers = 0;
//     for (i = 0; i < 1001; i++) {
//         passenagers += location[i];
//         if(passenagers > capacity){
//             return false;
//         }
//     }
//     return true;
// }

// 作者：mu-meng-wei-yu
// 链接：https://leetcode-cn.com/problems/car-pooling/solution/cyu-yan-shuang-bai-dai-ma-hen-duan-qie-rong-yi-li-/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。