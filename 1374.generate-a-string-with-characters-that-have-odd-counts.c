

char * generateTheString(int n) {
    
    char *str = (char*)malloc((n+1) * sizeof(char));
    char *p = str;
    
    (n % 2) ? (*p++ = 'a') : (*p++ = 'b');
    
    while (--n) {
        *p++ = 'a';
    }
    
    *p = '\0';
    
    return str;
}
