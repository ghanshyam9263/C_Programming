#include <stdio.h>
  int i,j;
void twoSum(int nums[], int numsSize, int target) {
    for ( i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
                return;  
            }
        }
    }
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    twoSum(nums1, 4, target1); 

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    twoSum(nums2, 3, target2);  

    int nums3[] = {3, 3};
    int target3 = 6;
    twoSum(nums3, 2, target3);  

    return 0;
}

