#include <stdio.h>

int cmp(char *str, char *sub);

int isSub(char *str, char *sub);

int numOfStrings(char ** patterns, int patternsSize, char * word);

int main() {

    char *patterns[34] = {"dojsf","v","hetnovaoigv","ksvqfdojsf","hetnovaoig","yskjs","sfr","msurztkvppptsluk","ndxffbkkvejuakduhdcfsdbgbt","znhdgtwzbnh","h","ocaualfiscmbpnfalypmtdppymw","w","o","sfjksvqfdo","odqvzuc","bozawheajcmlewptgssueylcxhx","bno","jhmarzsphxduvdktzqjiz","j","sfrjhetnov","vxv","ksvqfd","ognwvqtadalmav","yqbspvfwmvhycmghabigl","qyfaiazgdqaw","ojsfrj","ojsfrjhetn","fdojs","do","ovaoig","k","vrh","jsfrjhetnovaoigvgk"};
    char *word = "csfjksvqfdojsfrjhetnovaoigvgk";
    int size = 34;

    printf("%d\n", numOfStrings(patterns, size, word));
}



// Solution 1

// int numOfStrings(char ** patterns, int patternsSize, char * word) {
    
//     int ans = 0;
    
//     for (int i = 0; i < patternsSize; i++) {
//         if (strstr(word, patterns[i]) != NULL) {
//             ans++;
//         }
//     }
    
//     return ans;
// }

// Solution 2

int cmp(char *str, char *sub);

int numOfStrings(char ** patterns, int patternsSize, char * word) {

    int ans = 0;
    
    for (int i = 0; i < patternsSize; i++) {
        
        char *p = word;
        
        while (*p) {
            if ((*p == *(patterns[i])) && cmp(p, patterns[i])) {
                ans++;
                break;
            }
            p++;
        }
    }
    
    return ans;
}

// Returns true if `sub` is a substring in `str`.
int cmp(char *str, char *sub) {
    
    while (*str && *sub) {
        if (*str++ != *sub++) {
            return 0;
        }
    }
    
    return (*sub == '\0');
}
