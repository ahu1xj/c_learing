#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int item_fact = 1; 


    if (scanf("%d", &n) != 1) {
        return 0;
    }


    for (int i = 1; i <= n; i++) {
        item_fact *= i;
        sum += item_fact;
    }

    printf("%d\n", sum);

    return 0;
}
