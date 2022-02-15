

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize){
    
    *returnSize = numsSize;
    int* ans = (int*)malloc(*returnSize * sizeof(int));
    
    // Check
    if (ans == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    
    for (int i = 0; i < numsSize; i++)
    {
        ans[i] = nums[nums[i]];
    }
    
    return ans;

}
