

int maxArea(int* height, int heightSize) {
    
    int h, curr = 0, area = 0;
    int *l = height;
    int *r = height + heightSize - 1;
    
    while (l < r) {
        
        int h = (*l < *r) ? *l : *r;
        curr = (r - l) * h;
        area = (curr > area) ? curr : area;
        
        while (*l <= h && l < r) {
            l++;
        }
        
        while (*r <= h && l < r) {
            r--;
        }
    }
    
    return area;
}
