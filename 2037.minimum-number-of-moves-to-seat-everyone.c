
// Soution 1
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    
    // 1 <= seats[i], students[j] <= 100
    int seatsArr[101] = {0}; 
    int studentsArr[101] = {0};
    for (int i = 0; i < seatsSize; i++) {
        seatsArr[seats[i]]++;
    }
    for (int i = 0; i < studentsSize; i++) {
        studentsArr[students[i]]++;
    }
    
    int moves = 0, minMoves = 0;
    for (int i = 1; i < 101; i++) {
        moves += seatsArr[i] - studentsArr[i];
        minMoves += (moves > 0) ? moves : -moves;
    }
    
    return minMoves;
}

// Soution 2
// int cmp(const void *curr, const void *next) {
//     return (*(int*)curr - *(int*)next);
// }

// int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    
//     qsort(seats, seatsSize, sizeof(int), cmp);
//     qsort(students, studentsSize, sizeof(int), cmp);
    
//     int minMoves = 0;
//     for (int i = 0; i < seatsSize; i++) {
//         minMoves += abs(seats[i] - students[i]);
//     }
    
//     return minMoves;
// }
