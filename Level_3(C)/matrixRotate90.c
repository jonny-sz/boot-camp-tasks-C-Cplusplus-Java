// void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 90 градусов по часовой стрелке.

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++, last-- ) {
        for ( int col = 0; col < size; col++ ) {
            target[row][col] = source[col][last];
        }
    }
}
