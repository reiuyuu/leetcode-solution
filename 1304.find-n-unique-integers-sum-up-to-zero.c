

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    
    *returnSize = n;
    int *res = (int*)malloc((*returnSize) * sizeof(int));
    
    // Build an array where the values are symmetric. (+x , -x).
    for (int i = 0; i < n/2; i++) {
        res[i] = i+1;
        res[n-1-i] = -(i+1);
    }
    
    // If n is odd, append value 0.
    if (n%2 != 0) {
        res[n/2] = 0;
    }
    
    return res;
}
