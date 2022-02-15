/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    
    *returnSize = numsSize;
    int* runningSum = (int*)malloc(*returnSize * sizeof(int));
    
    // Check
    if (runningSum == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    
    int tmp = 0;
    
    for (int i = 0; i < numsSize; i++)
    {
     
        tmp += nums[i];
        runningSum[i] = tmp;
    }
    
    return runningSum;
}
