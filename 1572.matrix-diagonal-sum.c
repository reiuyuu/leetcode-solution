

int diagonalSum(int** mat, int matSize, int* matColSize) {
    
    int sum = 0;
    
    for (int i = 0; i < matSize; i++) {
        sum += mat[i][i] + mat[i][matSize-1-i];
    }
    
    if (matSize%2 != 0) {
        sum -= mat[matSize/2][matSize/2];
    }
    
    return sum;
}
