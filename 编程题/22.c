#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int score;
    int sum = 0;
    int count = 0;
    double average = 0.0;

    if (N > 0) {
        for (int i = 0; i < N; i++) {
            scanf("%d", &score);
            sum += score;         
            if (score >= 60) {
                count++;          
            }
        }
        average = (double)sum / N;
    }


    printf("average = %.1f\n", average);
    printf("count = %d\n", count);

    return 0;
}
