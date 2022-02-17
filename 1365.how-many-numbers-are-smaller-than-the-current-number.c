

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    
    int *hash = (int*)calloc(101, sizeof(int)); // 0 <= nums[i] <= 100
    for (int i = 0; i < numsSize; i++) {
        int idx = nums[i];
        hash[idx] += 1;
    }
    
    int smallerNumbers = 0;
    for (int j = 0; j < 101; j++) {
        if (hash[j] != 0) {
            int currNumbers = hash[j];
            // Stores how many numbers that smaller than the current index.
            hash[j] = smallerNumbers;
            smallerNumbers += currNumbers;
        }
    }
    
    int *res = (int*)malloc(numsSize * sizeof(int));
    *returnSize = 0;
    for (int k = 0; k < numsSize; k++) {
        int idx = nums[k];
        res[k] = hash[idx];
        (*returnSize)++;
    }

    return res;
}

// Solution 2
// int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {

//     int *res = (int*)calloc(numsSize, sizeof(int));
//     int *p = res;
//     *returnSize = 0;
    
//     for (int i = 0; i < numsSize; i++) {
//         for (int j = 0; j < numsSize; j++) {
//             if (nums[i] > nums[j]) {
//                 (res[i])++;
//             }
//         }
//         (*returnSize)++;
//     }
    
//     return res;
// }
