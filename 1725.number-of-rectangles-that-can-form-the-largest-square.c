

int max(int a, int b);
int max(int a, int b);

int countGoodRectangles(int** rectangles, int rectanglesSize, int* rectanglesColSize) {
    
    int squares[rectanglesSize];
    int largest = 0, count = 0;
    
    for (int i = 0; i < rectanglesSize; i++) {
        squares[i] = min(rectangles[i][0], rectangles[i][1]);
        largest = max(largest, squares[i]);
    }
    
    for (int i = 0; i < rectanglesSize; i++) {
        if (squares[i] == largest) {
            count++;
        }
    }
    
    return count;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}
