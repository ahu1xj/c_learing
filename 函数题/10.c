#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}

double funcos( double e, double x ) {
    double sum = 0.0;    
    double term = 1.0;   
    double n = 0.0;      

    while (fabs(term) >= e) {
        sum += term;
        n++;
        // 使用递推公式计算下一项：term = term * (-x^2 / ((2n-1)*2n))
        term = term * (-1.0 * x * x) / ((2 * n - 1) * (2 * n));
    }
    
    sum += term;
    
    return sum;
}
