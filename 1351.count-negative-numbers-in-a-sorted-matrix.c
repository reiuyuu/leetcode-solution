

int countNegatives(int** grid, int gridSize, int* gridColSize) {

    int neg = 0;
    
    for (int r = 0; r < gridSize; r++) {
        for (int c = 0; c < *gridColSize; c++) {
            if (grid[r][c] < 0) {
                neg += *gridColSize-c;
                break;
            }
        }
    }
    
    return neg;
}
