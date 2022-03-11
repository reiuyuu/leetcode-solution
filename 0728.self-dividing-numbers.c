

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

bool isSelfDividing(int n);

int* selfDividingNumbers(int left, int right, int* returnSize){

    int *res = (int*)malloc((right-left+1) * sizeof(int));
    *returnSize = 0;
    int *p = res;
    
    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            *p++ = i;
            (*returnSize)++;
        }
    }
    
    return res;
}

bool isSelfDividing(int n) {
    
    int divisor = n;

    while (n) {
        
        int rem = n % 10;
        
        if (rem == 0 || divisor%rem != 0) {
            return false;
        }
        
        n = n / 10;
    }
    
    return true;
}
