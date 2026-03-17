#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortThree(int *x, int *y, int *z) {
    if (*x > *y) swap(x, y); 
    if (*x > *z) swap(x, z); 
    if (*y > *z) swap(y, z);
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sortThree(&a, &b, &c);

    printf("从小到大排序为：%d %d %d\n", a, b, c);
    return 0;
}
