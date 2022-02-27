

int symToInt(char *sym) {

    switch(*sym) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1; 
        default: return 0;
    }
}

int romanToInt(char *s) {
    
    int curr;
    int next;
    int sum = 0;
    
    while (*s) {

        curr = symToInt(s);

        if (*(s+1)) {
            next = symToInt(s+1);
            if (curr < next) {
                curr = next - curr;
                s++;
            }
        }

        sum += curr;
        s++;
    }

    return sum;
}
