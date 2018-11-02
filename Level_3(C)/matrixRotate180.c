// void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 180 градусов по часовой стрелке.

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int targetRow = 0, sourceRow = size - 1; targetRow < size; targetRow++, sourceRow-- ) {
        for ( int targetCol = 0, sourceCol = size - 1; targetCol < size; targetCol++, sourceCol-- ) {
            target[targetRow][targetCol] = source[sourceRow][sourceCol];
        }
    }
}
