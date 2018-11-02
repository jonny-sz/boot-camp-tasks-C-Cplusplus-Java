// Написать функцию
// void arrayExchange(int array[], int len)

// Попарно обменять местами все четные элементы массива с нечетными, начиная с нулевого.
// a[0] <-> a[1] a[2] <-> a[3] .....
// Если последний элемент не имеет пары — не менять его значение.

// Запрещено использование дополнительного массива.

void arrayExchange(int array[], int len) {
    int last = len - 1
    
    for ( int i = 0; i < last; i += 2 ) {
        int tmp = array[i];
        
        array[i] = array[i+1];
        array[i+1] = tmp;
    }
}
