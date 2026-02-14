#include <stdio.h>

int main() {
    int lower, upper;
    int fahr;
    double celsius;
    if (scanf("%d %d", &lower, &upper) != 2) {
        return 1;
    }

    if (lower > upper || upper > 100) {
        printf("Invalid.\n");
    } else {

        printf("fahr celsius\n");


        for (fahr = lower; fahr <= upper; fahr += 2) {
 
            celsius = 5.0 * (fahr - 32) / 9.0;
            printf("%d%6.1f\n", fahr, celsius);
        }
    }

    return 0;
}
