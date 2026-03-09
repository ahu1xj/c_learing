#include <stdio.h>
#include <stdlib.h> // 必须包含此头文件以使用 malloc 和 free

int main() {
    int N;
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 0;
    }
//scores[i]<=>*(scores+i) malloc返回的是 void* ,要强制转换下
    int *scores = (int *)malloc(N * sizeof(int));
    if (scores == NULL) {
        printf("内存分配失败\n");
        return 1;
    }

    double sum = 0;
    int max, min;

    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];

        if (i == 0) {
            max = min = scores[i];
        } else {
            if (scores[i] > max) max = scores[i];
            if (scores[i] < min) min = scores[i];
        }
    }

    printf("average = %.2f\n", sum / N);
    printf("max = %d\n", max);
    printf("min = %d\n", min);

    free(scores);

    return 0;
}
