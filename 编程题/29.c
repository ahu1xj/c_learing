#include <stdio.h>
int main() {
    double distance;
    int wait_time;
    double cost = 0.0;

    if (scanf("%lf %d", &distance, &wait_time) != 2) return 0;

    if (distance <= 3) {
        cost = 10.0;
    } else if (distance <= 10) {
        cost = 10.0 + (distance - 3) * 2.0;
    } else {
        cost = 10.0 + (10 - 3) * 2.0 + (distance - 10) * 3.0;
    }

    cost += (wait_time / 5) * 2;

    printf("%d\n", (int)(cost + 0.5));

    return 0;
}
