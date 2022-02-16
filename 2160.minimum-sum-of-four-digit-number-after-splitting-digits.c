

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int arr[], int n) {
    
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already in place.
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// int cmp(const void *a, const void *b) {
//     return (*(int*)a - *(int*)b);
// }

int minimumSum(int num) {
    
    int fourDigits[4];
    
    for (int i = 0; i < 4; i++) {
        fourDigits[i] = num % 10;
        num = num / 10;
    }
    
    bubbleSort(fourDigits, 4);
    // qsort(fourDigits, 4, sizeof(int), cmp);
    
    int minSum = 10 * (fourDigits[0] + fourDigits[1]) + fourDigits[2] + fourDigits[3];
    
    return minSum;

}
