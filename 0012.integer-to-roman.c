

char * intToRoman(int num) {

    int val[] = {1000, 900, 500, 400, 100, 90,
                 50, 40, 10, 9, 5, 4, 1 };

    char *sym[] = {"M", "CM", "D", "CD", "C", "XC",
                     "L", "XL", "X", "IX", "V", "IV", "I"};

    char *roman = (char*)malloc(16 * sizeof(char));
    /* Set the first character to the null character
       so that strcat works properly. */
    *roman = '\0';
    
    int i = 0;
    while (num) {
 
        int n = num / val[i];
        num = num % val[i];

        while (n--) {
            strcat(roman, sym[i]);
        }

        i++;
    }

    return roman;
}

// Solution 2
// char * intToRoman(int num) {
    
//     // char roman[10];
//     char *roman = (char*)malloc(16 * sizeof(char));
//     char *p = roman;

//     //
//     while (num >= 1000) {
//         *p++ = 'M';
//         num -= 1000;
//     }
    
//     if (num >= 900) {
//         *p++ = 'C';
//         *p++ = 'M';
//         num -= 900;
//     }
    
//     if (num >= 500) {
//         *p++ = 'D';
//         num -= 500;
//     }
    
//     if (num >= 400) {
//         *p++ = 'C';
//         *p++ = 'D';
//         num -= 400;
//     }
    
//     //
//     while (num >= 100) {
//         *p++ = 'C';
//         num -= 100;
//     }
    
//     if (num >= 90) {
//         *p++ = 'X';
//         *p++ = 'C';
//         num -= 90;
//     }
    
//     if (num >= 50) {
//         *p++ = 'L';
//         num -= 50;
//     }
    
//     if (num >= 40) {
//         *p++ = 'X';
//         *p++ = 'L';
//         num -= 40;
//     }
    
//     // 
//     while (num >= 10) {
//         *p++ = 'X';
//         num -= 10;
//     }
    
//     if (num >= 9) {
//         *p++ = 'I';
//         *p++ = 'X';
//         num -= 9;
//     }
    
//     if (num >= 5) {
//         *p++ = 'V';
//         num -= 5;
//     }
    
//     if (num  >= 4) {
//         *p++ = 'I';
//         *p++ = 'V';
//         num -= 4;
//     }
    
//     while (num >= 1) {
//         *p++ = 'I';
//         num -= 1;
//     }
    
//     *p = '\0';
//     return roman;
// }
