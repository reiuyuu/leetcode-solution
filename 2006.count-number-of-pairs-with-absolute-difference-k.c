

int countKDifference(int* nums, int numsSize, int k) {
    
    int pairs = 0;
    
    for (int i = 0; i < numsSize-1; i++) {
         for (int j = i+1; j < numsSize; j++) {
             if (nums[i] - nums[j] == k || nums[i] - nums[j] == -k) {
                 pairs++;
             }
         }
    }
    
    return pairs;
}
