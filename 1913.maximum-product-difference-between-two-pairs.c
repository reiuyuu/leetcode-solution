

int cmp(const void *a, const void *b);

int maxProductDifference(int* nums, int numsSize) {
    
    qsort(nums, numsSize, sizeof(nums[0]), cmp);
    
    return (nums[numsSize-2]*nums[numsSize-1]) - (nums[0]*nums[1]);
}

int cmp(const void *a, const void *b) {
    return *((int*)a) - *((int*)b);
}
