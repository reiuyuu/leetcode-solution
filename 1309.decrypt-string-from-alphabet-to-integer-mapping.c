

char * freqAlphabets(char * s) {
    
    int len = strlen(s);
    
    char *res = (char*)malloc((len+1) * sizeof(char));
    char *p = res;
    
    for (int i = 0; i < len; i++) {
        if (i < len-2 && s[i+2] == '#') {
            *p++ = (s[i]-'0')*10 + s[i+1]-'0' + 'a'-1;
            i += 2;
        } else {
            *p++ = s[i]-'0' + 'a'-1;
        }
    }
    
    *p = '\0';
    return res;
}
