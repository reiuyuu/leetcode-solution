

long int decToK(int dec, int k);

int sumBase(int n, int k) {
    
    long int base_k = decToK(n, k);
    int sum = 0;
    
    while (base_k) {
        sum += base_k % 10;
        base_k = base_k / 10;
    }
    
    return sum;
}

long int decToK(int dec, int k) {
    
    long long res = 0;
    int i = 1;
    
    while (dec != 0) {
        res += (dec % k) * i;
        i *= 10;
        dec = dec / k;
    }
    
    return res;
}

// Solution 2
// int sumBase(int n, int k) {
    
//     int sum = 0;
    
//     while (n) {
//         sum += n % k;
//         n = n / k;
//     }
    
//     return sum;
// }
