

int maxIncreaseKeepingSkyline(int** grid, int gridSize, int* gridColSize) {

    int *rowMax = (int*)malloc(gridSize * sizeof(int));
    int *colMax = (int*)malloc(*gridColSize * sizeof(int)); // bug
    memset(rowMax, 0, sizeof(rowMax));
    memset(colMax, 0, sizeof(colMax));
    
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            if (rowMax[i] < grid[i][j]) {
                rowMax[i] = grid[i][j];
            }
            if (colMax[j] < grid[i][j]) {
                colMax[j] = grid[i][j];
            }
        }
    }
    
    int sum = 0;
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            sum += (rowMax[i] < colMax[j] ? rowMax[i] : colMax[j]) - grid[i][j]; 
        }
    }
    
    return sum;
}
