#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
  //今天的桃子=昨天%2-1；->>(今天桃子+1)*2
    int total = 1; 

    for (int i = 0; i < N - 1; i++) {
        total = (total + 1) * 2;
    }

    printf("%d\n", total);

    return 0;
}
