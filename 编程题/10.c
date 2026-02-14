#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    if (scanf("%d", &n) != 1) {
        return 1;
    }


    for (int i = 1; i <= n; i++) {
        // 注意：使用 1.0 确保进行浮点除法,这样才能强制转换为浮点数运算。
        sum = sum + 1.0/ i;
    }


    printf("sum = %.6f\n", sum);

    return 0;
}
