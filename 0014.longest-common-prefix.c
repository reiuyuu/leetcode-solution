#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize);

int main() {

    char *strs[] = {"ab", "a"};
    printf("%s\n", longestCommonPrefix(strs, 2));
}

char * longestCommonPrefix(char ** strs, int strsSize) {

    // Make the first string the longest prefix.
    char *prefix = (char*)malloc(strlen(strs[0])+1 * sizeof(char));
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        
        // p point to the prefix, which keeps updating in the loop.
        // next point to the following string to be compared.
        char *p = prefix;
        char *next = strs[i];
        
        // prefix updates when a different char is encountered.
        while (*p) {
            if (*p != *next) {
                *p = '\0';
                break;
            }
            p++;
            next++;
        }
    }
    
    return prefix;
}
