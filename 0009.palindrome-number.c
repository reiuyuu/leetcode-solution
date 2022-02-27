

bool isPalindrome(int x) {
    
    if (x < 0) {
        return false;
    }
    
    int orig = x;
    long int rev = 0;
    int rem;
    
    //  Reverse the integer.
    while (x != 0) {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    
    if (orig == rev) {
        return true;
    } else {
        return false;
    }
}
