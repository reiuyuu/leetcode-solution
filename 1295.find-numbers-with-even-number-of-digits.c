

int findNumbers(int* nums, int numsSize) {
    
    int count = 0;
    
    for (int i = 0; i < numsSize; i++) {
        
        int digits = 0;
        
        while(nums[i]) {
            nums[i] = nums[i] / 10;
            digits++;
        }
        
        if (digits%2 == 0) {
            count++;
        }
    }
    
    return count;
}
