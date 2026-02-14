#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;


    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {

        sum = sum + 1.0 / (2 * i - 1);
    }

    printf("sum = %.6f\n", sum);

    return 0;
}
