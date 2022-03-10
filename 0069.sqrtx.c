

int mySqrt(int x) {
    
    double xn = (double)x;
    
    while (fabs(xn*xn-x) > 0.5) {
        xn = (xn + x/xn) / 2.0;
    }
    
    return (int)floor(xn);
}
