

int maxDepth(char * s) {
    
    int tmp = 0;
    int max = 0;
    
    while (*s) {
        if (*s == '(') {
            tmp++;
        } else if (*s == ')') {
            tmp--;
        }
        max = (max > tmp) ? max : tmp;
        s++;
    }
    
    return max;
}
