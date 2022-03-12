

char * mergeAlternately(char * word1, char * word2) {
    
    int len = strlen(word1) + strlen(word2);
    char *res = (char*)malloc((len+1) * sizeof(char));
    char *p = res;
    
    while(*word1 && *word2) {
        *p++ = *word1++;
        *p++ = *word2++;
    }
    
    while(*word1) {
        *p++ = *word1++;
    }
    
    while(*word2) {
        *p++ = *word2++;
    }
    
    *p = '\0';
    
    return res;
}
