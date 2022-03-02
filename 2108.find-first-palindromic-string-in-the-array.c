

bool checkPali(char *str);

char * firstPalindrome(char ** words, int wordsSize) {
    
    for (int i = 0; i < wordsSize; i++) {
        if (checkPali(words[i])) {
            return words[i];
        }
    }
    
    return "";
}

bool checkPali(char *str) {
    
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left++] != str[right--]) {
            return false;
        }
    }
    
    return true;
}
