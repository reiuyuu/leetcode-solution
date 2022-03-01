

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    
    //
    int arr[101] = { 0 };
    
    for (int i = 0; i < numsSize; i++) {
        arr[nums[i]]++;
    }
    
    //
    int idx = 0;
    
    for (int i = 1; i < target; i++) { 
        idx += arr[i];
    }
    
    //
    int *indices = (int*)malloc(arr[target] * sizeof(int));
    *returnSize = 0;
    
    for (int i = 0; i < arr[target]; i++) {
        indices[i] = idx++;
        (*returnSize)++;
    }
    
    return indices;
}
