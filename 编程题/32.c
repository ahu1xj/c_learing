#include <stdio.h>
#include <math.h>

int main() {
    double eps, sum = 0, item;
    double denominator = 1.0;
    int flag = 1;

    if (scanf("%lf", &eps) != 1) return 0;

    do {
        item = flag * (1.0 / denominator);
        
        sum += item;
        
        flag = -flag;
        denominator += 3;

    } while (fabs(item) > eps);
    printf("sum = %.6f\n", sum);

    return 0;
}
