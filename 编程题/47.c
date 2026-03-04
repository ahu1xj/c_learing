#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    // 特殊情况：如果要求达到 1 对，第 1 个月就够了
    if (N <= 1) {
        printf("1");
        return 0;
    }

    int f1 = 1; // 上上个月
    int f2 = 1; // 上个月
    int current = 0; // 当前月总数
    int month = 2;   // 从第 2 个月开始计算

    while (f2 < N) {
        current = f1 + f2; // 算出新一个月的数量
        f1 = f2;           // 更新旧数据
        f2 = current;
        month++;           // 月份增加
    }

    // 注意：如果 N=1，循环不跑，输出 month=2 是错的，所以上面加了 if(N<=1)
    // 或者初始化时调整逻辑
    printf("%d", month);

    return 0;
}
