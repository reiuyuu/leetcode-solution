

int numJewelsInStones(char * jewels, char * stones){
    
    int num = 0;
    
    // Solution 1, runtime <= jewels * stones
    // Iterate over stones.
    while (*stones) {
        // Iterate over jewels.
        char *p = jewels;
        while (*p) {
            if (*stones == *p) {
                num++;
                break;
            }
            p++;
        }
        stones++;
    }
    
    // Solution 2, runtime = jewels * stones, is slightly worse.
    // Iterate over jewels.
    // while (*jewels) {
    //     char *p = stones;
    //     // Iterate over stones.
    //     while (*p) {
    //         if (*p == *jewels) {
    //             num++;
    //         }
    //         p++;
    //     }
    //     jewels++;
    // }
    
    return num;

}
