

char * destCity(char *** paths, int pathsSize, int* pathsColSize) {
    
    char *dest = paths[0][1];
    
    for (int i = 1; i < pathsSize; i++) {
        if (strcmp(paths[i][0], dest) == 0) {
            dest = paths[i][1];
            i = 0;
        }
    }
    
    return dest;
}
