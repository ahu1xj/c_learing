#include <stdio.h>

int main() {
    for (int i = 4; i >= 1; i--) {

        for (int j = 0; j < 4 - i; j++) {
            printf(" ");
        }

        for (int k = 0; k < i; k++) {
            printf("* ");
        }

        // 3. 换行
        printf("\n");
    }

    return 0;
}
