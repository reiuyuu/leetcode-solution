

int largestAltitude(int* gain, int gainSize) {
    
    int highest = 0, curr = 0;
    
    for (int i = 0; i < gainSize; i++) {
        curr += gain[i];
        highest = (highest > curr) ? highest : curr;
    }
    
    return highest;
}
