

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    
    *returnSize = 0;
    int *res = (int*)malloc(numsSize * sizeof(int));
    
    // Solution 1.
    int *p = res;
    for (int i = 0; i < n; i++) {
        *p++ = *nums++; // *p++ means *p then p++
        *p++ = *(nums + n - 1);
        *returnSize += 2;
    }
    
    // Solution 2
    // for (int i = 0; i < n; i++) {
    //     res[(*returnSize)++] = nums[i]; // (*returnSize)++ means *returnSize then (*returnSize)++
    //     res[(*returnSize)++] = nums[i + n];
    // }
    
    return res;

}
