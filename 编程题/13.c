#include <stdio.h>
#include <math.h> 

int main() {
    int n;


    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 0; i <= n; i++) {

        // pow 返回 double 类型，题目要求长整型，所以强制转换为 long long
        long long result = (long long)pow(3, i);


        printf("pow(3,%d) = %lld\n", i, result);
    }

    return 0;
}
