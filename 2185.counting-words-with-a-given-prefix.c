

bool isPref(char *word, char *pref);

int prefixCount(char ** words, int wordsSize, char * pref) {
    
    int count = 0;
    
    for (int i = 0; i < wordsSize; i++) {
        if (isPref(words[i], pref)) {
            count++;
        }
    }
    
    return count;
}

bool isPref(char *word, char *pref) {
    
    while (*word && *pref) {
        if (*word++ != *pref++) {
            return false;
        }
    }
    
    return (*pref == '\0');
}
