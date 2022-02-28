

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* partitionLabels(char * s, int* returnSize) {
    
    int endPos[26] = { 0 };
    
    for (int i = 0; s[i] != '\0'; i++) {
        endPos[s[i] - 'a'] = i;
    }

    int *ptn = (int*)malloc(26 * sizeof(int));
    *returnSize = 0;
    int end = 0, anchor = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        end = end > endPos[s[i] - 'a'] ? end : endPos[s[i] - 'a'];
        if (end == i) {
            ptn[(*returnSize)++] = end + 1 - anchor;
            anchor = end + 1;
        }
    }
    
    return ptn;
}
