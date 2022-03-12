

int cmp(const void *a, const void *b);

int arrayPairSum(int* nums, int numsSize) {
    
    qsort(nums, numsSize, sizeof(nums[0]), cmp);
    
    int sum = 0;
    
    for (int i = 0; i < numsSize; i += 2) {
        sum += nums[i];
    }
    
    return sum;
}

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
