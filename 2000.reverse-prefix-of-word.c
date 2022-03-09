

void revStr(char *str, int len);

char * reversePrefix(char * word, char ch) {
    
    char *p = word;
    int len = 0;
        
    while (*p) {
        
        len++;
        
        if (*p++ == ch) {
            revStr(word, len);
            break;
        }
    }
    
    return word;
}

void revStr(char *str, int len) {
    for (int i = 0; i < len/2; i++) {
        int tmp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = tmp;
    }
}
