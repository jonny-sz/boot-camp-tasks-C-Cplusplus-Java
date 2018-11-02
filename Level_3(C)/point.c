// С помощью известных вам инструментов реализовать тип Point (точка на координатной плоскости) с координатами x, y типа double.
// Также реализовать следующие функции:

// void pointPrint(Point a) - печать точки в виде (x, y). Воспользоваться шаблоном %g. Предусмотреть возможность печати вида (5, 7.8) not equal to (13.9, 25.3)
// int pointEqual(Point a, Point b) - сравнение двух точек по координатам (равны или не равны).
// double pointDistance(Point a, Point b) - нахождение расстояния между двумя точками. Воспользоваться функцией hypot() из библиотеки math.h

#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

void pointPrint(Point a) {
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    return hypot(b.x-a.x, b.y-a.y);
}

int main() {
    Point a, b;
    
    scanf("%lf %lf", &(a.x), &(a.y));
    scanf("%lf %lf", &(b.x), &(b.y));
    
    pointPrint(a);
    pointPrint(b);
    
    if ( !pointEqual(a, b) ) {
        printf( "Distance: %g\n", pointDistance(a, b) );
    }
    
    return 0;
}
