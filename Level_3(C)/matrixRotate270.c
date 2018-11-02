// void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 270 градусов по часовой стрелке.

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int targetCol = 0, sourceCol = size - 1; targetCol < size; targetCol++, sourceCol-- ) {
            target[row][targetCol] = source[sourceCol][row];
        }
    }
}
