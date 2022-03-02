

bool isSubsequence(char * s, char * t) {
    
    char *p = s;
    
    while (*t) {
        if (*p == *t) {
            p++;
        }
        t++;
    }
    
    if (*p == '\0') {
        return true;
    } else {
        return false;
    }
}
