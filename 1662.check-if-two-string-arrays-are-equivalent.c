

bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size) {
    
    char *p1 = *word1;
    char *p2 = *word2;
    
    while (word1Size && word2Size) {
        
        if (*p1 == '\0') {
            if (--word1Size) {
                word1++;
                p1 = *word1;
            }
        }
        
        if (*p2 == '\0') {
            if (--word2Size) {
                word2++;
                p2 = *word2;
            }
        }
        
        if (*p1 != *p2) {
            return false;
        }
        
        p1++;
        p2++;
    }
    
    return word1Size == word2Size;
}
