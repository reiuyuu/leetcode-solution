#define TYPE 0
#define COLOR 1
#define NAME 2

int countMatches(char *** items, int itemsSize, int* itemsColSize, char * ruleKey, char * ruleValue) {
    
    int key = 0;
    switch (ruleKey[0]) {
        case 't': key = TYPE; break;
        case 'c': key = COLOR; break;
        case 'n': key = NAME; break;
        default: return -1;
    }
    
    int matches = 0;
    for (int i = 0; i < itemsSize; i++) {
        if (strcmp(items[i][key], ruleValue) == 0) {
            matches++;
        }
    }
    
    return matches;
}
