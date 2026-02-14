#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int flag = 1; 
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += flag * ((double)i / (2 * i - 1));
        flag = -flag;
    }
    printf("%.3f\n", sum);

    return 0;
}
