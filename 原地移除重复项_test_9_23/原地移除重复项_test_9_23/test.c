#include <stdio.h>

int removeElement(int* nums, int numsSize, int val);

int main(void)
{


	return 0;
}

int removeElement(int* nums, int numsSize, int val)
{
    int src = 0;
    int dst  = 0;

    for (src = 0; src < numsSize; src++)
    {
        if (nums[src] != val)
        {
            
            nums[dst] = nums[src];
            dst++;
        }
    }

    return dst;
}
