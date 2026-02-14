#include <stdio.h>

int main() {
    double x, cost;

    if (scanf("%lf", &x) != 1) {
        return 0;
    }


    if (x < 0) {
        printf("Invalid Value!\n");
    } else if (x <= 50) {

        cost = x * 0.53;
        printf("cost = %.2f\n", cost);
    } else {
        cost = 50 * 0.53 + (x - 50) * 0.58;
        printf("cost = %.2f\n", cost);
    }

    return 0;
}
