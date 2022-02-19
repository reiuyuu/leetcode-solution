

char * interpret(char * command) {
    
    char* goal = (char*)malloc((100+1) * sizeof(char)); // 1 <= command.length <= 100
    char* p = goal;
    
    while (*command) {
        if (*command == '(') {
            command++;
            // "(al)"
            if (*command == 'a') {
                *p++ = 'a';
                *p++ = 'l';
                command += 3;
            // "()"
            } else {
                *p++ = 'o';
                command++;
            }
        // "G"
        } else {
            *p++ = 'G';
            command++;
        }
    }
    
    *p = '\0';
    return goal;
}
