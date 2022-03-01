

int minOperations(int n) {
    
    int ops = 0;
    n--;
    
    while (n > 0) {
        ops += n;
        n -= 2;
    }
    
    return ops;
}
