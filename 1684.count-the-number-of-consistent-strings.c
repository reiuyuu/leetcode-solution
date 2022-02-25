

// Solution 1
int countConsistentStrings(char * allowed, char ** words, int wordsSize) {
    
    int cons = wordsSize; // Assume that all strings are consistent.
    char *word;
    char *p;
    
    for (int i = 0; i < wordsSize; i++) {
        
        word = words[i];
        while (*word) {
            
            p = allowed;
            while (*p) {
                if (*p == *word) {
                    break;
                }
                p++;
            }
            
            if (*p == '\0') {
                cons--;
                break;
            }
            
            word++;
        }
    }
    
    return cons;
}

// Solution 2
// int countConsistentStrings(char * allowed, char ** words, int wordsSize) {
    
//     int arr[26] = { 0 };
    
//     while (*allowed) {
//         arr[*allowed - 'a']++;
//         allowed++;
//     }
    
//     char *word;
//     int cons = 0;
    
//     for (int i = 0; i < wordsSize; i++) {
        
//         word = words[i];
//         while (*word) {
//             if (arr[*word - 'a'] == 0) {
//                 break;
//             }
//             word++;
//         }
        
//         if (*word == '\0') {
//             cons++;
//         }
//     }
    
//     return cons;
// }
