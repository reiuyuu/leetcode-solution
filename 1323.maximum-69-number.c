

int maximum69Number (int num) {
    
    int copy = num;
    int acc = 0, chg = 3;
    
    while (copy) {
        
        if (copy%10 == 6) {
            acc = chg;
        }
        
        copy = copy / 10;
        chg =  chg * 10;
    }
    
    return num + acc;
}
