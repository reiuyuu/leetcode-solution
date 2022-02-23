

int sumOddLengthSubarrays(int* arr, int arrSize) {
    
    int sum = 0;
    int odd = 1;
    
    while (arrSize / odd) {
        int n = 1 + (arrSize - odd);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < odd; j++) {
                sum += arr[i+j];
            }
        }
        
        odd += 2;
    }
    
    return sum;
}
