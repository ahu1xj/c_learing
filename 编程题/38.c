#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double sum = 1.0; 
    double term = 1.0; 
    int k = 0; 

//double对应lf
    if (scanf("%lf", &x) != 1) return 0;
    do {
        k++;
        term *= (x / k);
        sum += term; 
    } while (fabs(term) >= 0.00001);

    printf("%.4f\n", sum);

    return 0;
}
