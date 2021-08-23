/*
* solution 2 : presum
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
    int array[] = {1,3,3,4,3,5,6,34,-27};
    printf("%d\n",(subarraySum(array,9,7)));

	return 0;
}

#define CAPACITY 100000

struct Entry
{
    int sum;
    int count;
};

int getIndex(int key)//使 (INT_MIN,INT_MIN) 范围转化为 [0,CAPACITY)
{
    return (key % CAPACITY + CAPACITY) % CAPACITY;
}

void AddOne(struct Entry** counter,int sum)
{
    int i=getIndex(sum);
    while(counter[i]!=NULL)
    {
        if(counter[i]->sum==sum)
        {
            counter[i]->count++;
            return;
        }
        i=getIndex(i+1);//如果下标相撞就存到下一个位置
    }
    struct Entry * entry=malloc(sizeof(struct Entry));//第一次出现sum的情况
    entry->sum=sum;
    entry->count=1;
    counter[i]=entry;
}

int query(struct Entry** counter,int sum)
{
    int i=getIndex(sum);
    while(counter[i]!=NULL)
    {
        if(counter[i]->sum==sum)
        {
            return counter[i]->count;
        }
        i=getIndex(i+1);//这个查找想法要和存的时候一样
    }
    return 0;
}

int subarraySum(int* nums, int numsSize, int k)
{
    struct Entry** counter=calloc(CAPACITY,sizeof(struct Entry*));//结构体数组
    int sum=0;
    int totalCount=0;
    for(int j=0;j<numsSize;j++)
    {
        AddOne(counter,sum);//计数
        sum+=nums[j];
        int target=sum-k;
        totalCount+=query(counter,target);
    }
    free(counter);
    return totalCount;
}

