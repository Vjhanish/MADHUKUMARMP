include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Create a hash table to store the indices of the elements
    int* hashTable = (int*)calloc(2048, sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        if (hashTable [complement + 1024] != 0) {
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = hashTable[complement + 1024] - 1;
            result[1] = i;
            *returnSize = 2;
            free(hashTable);
            return result;
        }
        hashTable[nums[i] + 1024] = i + 1;
    }
    *returnSize = 0;
    free(hashTable);
    return NULL;
}
