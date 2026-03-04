#include <stdio.h>

int main() {
    int year;
    int found = 0; // 用于标记是否找到了闰年

    if (scanf("%d", &year) != 1) return 0;


    if (year < 2001 || year > 2100) {
        printf("Invalid year!\n");
    } else {
        for (int i = 2001; i <= year; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
                printf("%d\n", i);
                found = 1; // 找到了，标记设为1
            }
        }

        if (!found) {
            printf("None\n");
        }
    }

    return 0;
}
