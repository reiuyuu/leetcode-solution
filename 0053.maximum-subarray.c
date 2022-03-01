

int max(int a, int b);

int maxSubArray(int* nums, int numsSize) {
    
    int ans = INT_MIN;
    int curr = 0;
    
    for (int i = 0; i < numsSize; i++) {
        curr = max(curr+nums[i], nums[i]);
        ans = max(ans, curr);
    }
    
    return ans;
}

int max(int a, int b) {
    return (a >= b) ? a : b;
}
