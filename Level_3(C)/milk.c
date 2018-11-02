// Молочная компания каждый день покупает молоко у фермеров. У каждого из <farmerQuantity> фермеров есть <amount> литров молока по цене <price>. Найти минимальную стоимость <minPrice>, за которую возможно приобрести <amountNeeded> литров молока. В случае, если у фермеров недостаточно молока, вывести в качестве <minPrice> значение 0.

// В файле task.in заданы целые числа:
// <farmerQuantity> <amountNeeded>
// <amount1> <price1>
// <amount2> <price2>
// .....
// <amountN> <priceN>

// Вывести minPrice в task.out.

// Ограничения:
// 0 <= farmerQuantity <= 100 000 000
// 0 <= amountNeeded <= 300 000 000
// 0 <= amount <= 300 000 000
// 1 <= price <= 1 000
// Пример ввода

// 3 10
// 5 1
// 8 2
// 8 3

// Пример вывода

// 15

#include <stdio.h>

#define MAXPRICE 1000

void scanByFile(FILE *in, unsigned long long *a, unsigned long long *b) {
    fscanf(in, "%llu %llu", a, b);
}

void arrayZeroFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

void arrayRead(FILE *in, int array[], int size, unsigned long long amountNeeded) {
    unsigned long long amount, price;
    
    for ( int i = 0; i < size; i++ ) {
        scanByFile(in, &amount, &price);
        if ( array[price] < amountNeeded ) {
            array[price] += amount;
        }
    }
}

unsigned long long arraySum(int array[], int size) {
    unsigned long long sum = 0;
    
    for ( int i = 0; i < size; i++ ) {
        sum += array[i];
    }
    return sum;
}

unsigned long long minPrice(int array[], int size, unsigned long long amountNeeded) {
    unsigned long long minPrice = 0;
    unsigned long long amount;
    
    if ( amountNeeded > arraySum(array, size) ) {
        return 0;
    }
    
    for ( int price = 0; amountNeeded > 0; ) {
        amount = array[price];
        if ( amount > 0 ) {
            if ( amount <= amountNeeded ) {
                minPrice += price * amount;
                amountNeeded -= amount;
                price += 1;
            } else {
                minPrice += price * amountNeeded;
                amountNeeded = 0;
            }
        } else {
            price += 1;
        }
    }
    return minPrice;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    unsigned long long farmerQuantity, amountNeeded;
    int len = MAXPRICE + 1;
    int priceList[len];
    
    scanByFile(in, &farmerQuantity, &amountNeeded);
    arrayZeroFill(priceList, len);
    arrayRead(in, priceList, farmerQuantity, amountNeeded);
    
    fprintf(out, "%llu\n", minPrice(priceList, len, amountNeeded));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
