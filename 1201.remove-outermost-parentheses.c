

char * removeOuterParentheses(char * s) {
    
    char *res = (char*)malloc((strlen(s)+1) * sizeof(char));
    char *p = res;
    int bal = 0;
    
    while (*s) {
        
        if (*s == '(') {
            bal++;
            if (bal == 1) {
                s++;
                continue;
            }
        } else if (*s == ')') {
            bal--;
            if (bal == 0) {
                s++;
                continue;
            }
        }
        
        *p++ = *s++;
    }
    
    *p = '\0';
    return res;
}
