#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[100];
    int i, j, key;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 100; i++) {
        numbers[i] = (rand() % 10) + 1;
    }

    for (i = 1; i < 100; i++) {
        key = numbers[i];
        j = i - 1;
        while (j >= 0 && numbers[j] < key) {
            numbers[j + 1] = numbers[j];
            j = j - 1;
        }
        numbers[j + 1] = key;
    }

    for (i = 0; i < 100; i++) {
        printf("%d%c", numbers[i], (i % 10 == 9) ? '\n' : ' ');
    }

    return 0;
}
