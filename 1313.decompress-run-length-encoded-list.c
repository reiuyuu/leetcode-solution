

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    
    // Computer return size.
    int size = 0;
    for (int k = 0; k < numsSize; k+=2) {
        size += nums[k];
    }
    
    int *dcp = (int*)malloc(size * sizeof(int));
    int *p = dcp;
    *returnSize = 0;
    
    for (int i = 0; i < numsSize; i+=2) {
        for (int j = 0; j < nums[i]; j++) {
            *p = nums[i+1];
            p++;
            (*returnSize)++;
        }
    }
    
    return dcp;

}
