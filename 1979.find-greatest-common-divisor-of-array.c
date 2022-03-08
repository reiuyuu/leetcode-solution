

int cmp(const void *a, const void *b);
int gcd(int a, int b);

// Solution 1
int findGCD(int* nums, int numsSize) {
    
    qsort(nums, numsSize, sizeof(int), cmp);
    
    int gcd;
    
    for (int i = 1; i <= nums[0]; i++) {
        if (nums[0] % i == 0 && nums[numsSize-1] % i == 0) {
            gcd = i;
        }
    }
    
    return gcd;
}

// Solution 2
int findGCD(int* nums, int numsSize) {
    
    qsort(nums, numsSize, sizeof(int), cmp);
    
    return gcd(nums[0], nums[numsSize-1]);
}

int cmp(const void *a, const void *b) {
    return *((int*)a) - *((int*)b);
}

int gcd(int a, int b) {
    
    if (b) {
        while ((a%=b) && (b%=a));
    }
    
    return a + b;
}
