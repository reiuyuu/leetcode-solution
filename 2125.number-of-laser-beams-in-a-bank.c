

int numberOfBeams(char ** bank, int bankSize) {
    
    int totalBeam = 0;

    int lastBeam = 0;
    for (int i = 0; i < bankSize; i++) {
        int currBeam = 0;
        while(*bank[i]) {
            if (*bank[i]++ == '1') {
                currBeam++;
            }
        }
        
        if (currBeam == 0) {
            continue;
        }
        totalBeam += lastBeam * currBeam;
        lastBeam = currBeam;
    }

    return totalBeam;
}
