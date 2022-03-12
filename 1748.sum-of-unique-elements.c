

int sumOfUnique(int* nums, int numsSize) {

    // Build the frequency array.
    
    int freq[101] = { 0 }; // 1 <= nums[i] <= 100
    
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
    }
    
    // Traverse
    
    int sum = 0;
    
    for (int i = 0; i < 101; i++) {
        if (freq[i] == 1) {
            sum += i;
        }
    }
    
    return sum;
}
