#include <stdio.h>

int main() {
    double x, result;

    if (scanf("%lf", &x) != 1) {
        return 1;
    }


    if (x == 0) {
        result = 0.0;
    } else {
        result = 1.0 / x;
    }

    printf("f(%.1f) = %.1f\n", x, result);

    return 0;
}
