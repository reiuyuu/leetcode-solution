

int minPartitions(char * n){
    
    int maxDigit = 0;
    while (*n) {
        int currDigit = *n - '0'; // atoi(*n) didn't works.
        maxDigit = (maxDigit < currDigit) ? currDigit : maxDigit;
        n++;
    }
    
    return maxDigit;
}
