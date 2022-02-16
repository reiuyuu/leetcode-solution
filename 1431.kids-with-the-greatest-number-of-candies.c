

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    
    bool *greatest = (bool*)malloc(candiesSize * sizeof(bool));
    bool *p = greatest;
    *returnSize = 0;
    
    int max = 0;
    for (int i = 0; i < candiesSize; i++) {
        if (max < candies[i])
            max = candies[i];
    }
    
    for (int j = 0; j < candiesSize; j++) {
        if ((candies[j] + extraCandies) >= max) {
            *p++ = true;
            // greatest[j] = true;  // Alternative style.
        } else {
            *p++ = false;
            // greatest[j++] = false; // Alternative style.
        }
        (*returnSize)++;
    }
    
    return greatest;

}
