char * restoreString(char * s, int* indices, int indicesSize) {
    
    char *res = (char*)malloc((indicesSize+1) * sizeof(char));
    
    for (int i = 0; i < indicesSize; i++) {
        int idx = indices[i];
        res[idx] = *s;
        s++;
    }
    res[indicesSize] = '\0';
    
    return res;

}
