char * sortString(char * s) {
    
    int size = strlen(s);
    char *res = (char*)malloc((size+1) * sizeof(char));
    char *p = res;
    
    //
    int arr[26] = { 0 };
    
    while (*s) {
        arr[*s++ - 'a']++;
    }
    
    //
    while (size) {
        
        for (int i = 0; i < 26; i++) {
            if (arr[i] && size--) {
                *p++ = 'a' + i;
                arr[i]--;
            }
        }

        for (int i = 25; i >= 0; i--) {
            if (arr[i] && size--) {
                *p++ = 'a' + i;
                arr[i]--;
            }
        }
    }

    *p = '\0';
    
    return res;
}