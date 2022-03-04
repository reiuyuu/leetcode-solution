

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** image,
                         int imageSize,
                         int* imageColSize,
                         int* returnSize,
                         int** returnColumnSizes) {
    
    int **res = (int**)malloc(imageSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(imageSize * sizeof(int));
    
    for (int r = 0; r < imageSize; r++) {
        
        int colSize = imageColSize[r];
        res[r] = (int*)malloc(colSize * sizeof(int));
        
        for (int c = 0; c < colSize; c++) {
            res[r][c] = (image[r][colSize-1-c] == 1) ? 0 : 1;
        }
        
        *(*returnColumnSizes + r) = colSize;
    }
    
    *returnSize = imageSize;
    
    return res;
}
