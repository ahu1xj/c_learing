#include <stdio.h>

int main() {
    int a, b;
 // scanf 返回输入值个数   
    if (scanf("%d %d", &a, &b) != 2) {
        return 1; // 确保输入有效
    }


    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
    } else {
        printf("除数不能为0\n");
    }

    return 0;
}
