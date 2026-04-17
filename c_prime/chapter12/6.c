#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test_rand(unsigned int seed) {
    int counts[11] = {0}; // 索引 1-10 对应数字 1-10
    srand(seed);

    for (int i = 0; i < 1000; i++) {
        int num = (rand() % 10) + 1;
        counts[num]++;
    }

    printf("Seed: %u\n", seed);
    for (int i = 1; i <= 10; i++) {
        printf("Number %d: %d times%c", i, counts[i], (i % 5 == 0) ? '\n' : '\t');
    }
    printf("--------------------------------------------------\n");
}

int main() {
    unsigned int seeds[10] = {1, 7, 42, 123, 999, 2024, 8888, 55, 0, (unsigned int)time(NULL)};

    for (int i = 0; i < 10; i++) {
        test_rand(seeds[i]);
    }

    return 0;
}
