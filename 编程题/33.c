#include <stdio.h>

int main() {
    int target, n;
    int guess;
    int count = 0;

    if (scanf("%d %d", &target, &n) != 2) return 0;

    while (1) {
        if (scanf("%d", &guess) != 1) break;

        if (guess < 0) {
            printf("Game Over\n");
            break;
        }

        count++;

        if (count > n) {
            printf("Game Over\n");
            break;
        }

        if (guess > target) {
            printf("Too big\n");
        } else if (guess < target) {
            printf("Too small\n");
        } else {

            if (count == 1) {
                printf("Bingo!\n");
            } else if (count <= 3) {
                printf("Lucky You!\n");
            } else {
                printf("Good Guess!\n");
            }
            break;
        }
    }

    return 0;
}
