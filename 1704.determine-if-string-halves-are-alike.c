

bool isVowel(char *s);

bool halvesAreAlike(char * s){
    
    int len = strlen(s) / 2;
    int a = 0, b = 0;
    
    for (int i = 0; i < len; i++) {
        if (isVowel(&s[i])) {
            a++;
        }
        if (isVowel(&s[i+len])) {
            b++;
        }
    }
            
    return (a == b);
}

bool isVowel(char *s) {
    
    char *vowels = "aeiouAEIOU";
    
    while (*vowels) {
        
        if (*s == *vowels) {
            return true;
        }
        
        vowels++;
    }
    
    return false;
}
