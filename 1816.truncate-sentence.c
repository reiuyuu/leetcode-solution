

char * truncateSentence(char * s, int k) {
    
    char *p = s;
    
    while (*p) {
        
        if (*p == ' ') {
            k--;
        }
        
        if (k == 0) {
            *p = '\0';
        }
        
        p++;
    }
    
    return s;
}
