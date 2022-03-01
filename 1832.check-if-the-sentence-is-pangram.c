

bool checkIfPangram(char * sentence) {
    
    int arr[26] = { 0 };
    
    while (*sentence) {
        arr[*sentence++ - 'a'] = 1;
    }
    
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 0) {
            return false;
        }
    }
    
    return true;
}
