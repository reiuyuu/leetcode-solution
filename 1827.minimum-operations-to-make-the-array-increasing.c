

int minOperations(int* nums, int numsSize) {
    
    int ops = 0;
    
    for (int i = 0; i < numsSize-1; i++) {
        
        if (nums[i+1] <= nums[i]) {
            
            int curr = nums[i] - nums[i+1] + 1;
            
            nums[i+1] += curr;
            ops += curr;
    }
    
    return ops;
}
