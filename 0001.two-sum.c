

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int* solution = (int*)malloc(2 * sizeof(int));

    // Check
    if (solution == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                *returnSize = 2;
                solution[0] = i;
                solution[1] = j;
                return solution;
            }
        }
    }
    
    *returnSize = 0;
    free(solution);
    return NULL;
}
