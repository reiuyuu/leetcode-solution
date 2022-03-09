

void revStr(char *str, int len);

char * reverseWords(char * s) {
    
    int size = strlen(s),
        start = 0;
    
    for (int end = 0; end <= size; end++) {
        if (s[end] == ' ' || end == size) {
            revStr(&s[start], end - start);
            start = end + 1;
        }
    }
    
    return s;
}

void revStr(char *str, int len) {
    for (int i = 0; i < len/2; i++) {
        int tmp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = tmp;
    }
}
