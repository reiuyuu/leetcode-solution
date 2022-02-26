

int countPoints(char * rings) {
    
    int red[10] = { 0 };
    int green[10] = { 0 };
    int blue[10] = { 0 };
    
    while (*rings) {
        if (*rings == 'R') {
            red[*(rings+1)-'0'] = 1;
        } else if (*rings == 'G') {
            green[*(rings+1)-'0'] = 1;
        } else if (*rings == 'B') {
            blue[*(rings+1)-'0'] = 1;
        }
        rings += 2;
    }
    
    int count = 0;
    
    for (int i = 0; i < 10; i++) {
        if (red[i]+green[i]+blue[i] == 3) {
            count++;
        }
    }
    
    return count;
}
