#include <stdio.h>
   int i,j,k;
void printTriplets(int nums[], int numsSize) {
   
    for (i = 0; i < numsSize - 2; i++) {
       
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
      
        for ( j = i + 1; j < numsSize - 1; j++) {
            
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            for ( k = j + 1; k < numsSize; k++) {
             
                if (nums[i] + nums[j] + nums[k] == 0) {
                    printf("[%d, %d, %d]\n", nums[i], nums[j], nums[k]);
                }
            }
        }
    }
}

int main() {
    int nums1[] = {-1, 0, 1, 2, -1, -4};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: [-1, 0, 1, 2, -1, -4]\nOutput:\n");
    printTriplets(nums1, numsSize1);  

    int nums2[] = {0, 1, 1};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("\nInput: [0, 1, 1]\nOutput:\n");
    printTriplets(nums2, numsSize2); 

    int nums3[] = {0, 0, 0};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("\nInput: [0, 0, 0]\nOutput:\n");
    printTriplets(nums3, numsSize3);  

    return 0;
}

