

int singleNumber(int* nums, int numsSize){
    
    int odd = 0;
    
    for (int i = 0; i < numsSize; i++)
    {
        odd ^= nums[i];
    }
    
    return odd;
}
