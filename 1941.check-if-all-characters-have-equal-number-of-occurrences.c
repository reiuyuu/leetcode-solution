

bool areOccurrencesEqual(char * s) {
    
    // Build a dictionary containing the frequency
    // of each character appearing in s.
    int freq[26] = { 0 };
    char *p = s;
    
    while (*p) {
        freq[*p++ - 'a']++;
    }
    
    // Check if all values in the dictionary are the same.
    int same = freq[*s - 'a'];
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] && freq[i] != same) {
            return false;
        }
    }
    
    return true;
}
