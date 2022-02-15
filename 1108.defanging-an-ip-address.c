

char * defangIPaddr(char * address){
    
    char *res = (char*)malloc((strlen(address) + 6 + 1) * sizeof(char)); 
    char *p = res;
    
    while (*address) {
        if (*address == '.') {
            *p++ = '[';
            *p++ = '.';
            *p++ = ']';
            address++;
        } else {
            *p++ = *address++;
        }
    }
    *p = '\0';

    return res;
    
}
