#include <stdio.h>
#include <math.h> //数学库是一个单独的，需要gcc 6.c -o 6 -lm （link math library）

double dist( double x1, double y1, double x2, double y2 );

int main()
{    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
    
    return 0;
}
//pow 求方运算
double dist( double x1, double y1, double x2, double y2 ) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}
