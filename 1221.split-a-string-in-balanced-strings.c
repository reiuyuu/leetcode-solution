

int balancedStringSplit(char * s) {
    
    int balanced = 0;
    int amount = 0;
    
    while (*s) {
        balanced = (*s == 'L') ? balanced+1 : balanced-1;
        amount = (balanced == 0) ? amount+1 : amount;
        s++;
    }
    
    return amount;
}
