#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");
    
    return 0;
}
/* 约瑟夫环 */
void CountOff( int n, int m, int out[] ) {
    int status[MAXN] = {0}; // 0在圈内，1已退出
    int exit_num = 0;       // 当前是第几个退出的
    int count = 0;          // 报数计数器
    int i = 0;              // 当前下标

    while (exit_num < n) {
        if (status[i] == 0) { // 如果这个人还在圈子里
            count++;
            if (count == m) { // 数到 m 了
                exit_num++;
                out[i] = exit_num; // 记录退出顺位
                status[i] = 1;     // 标记为已退出
                count = 0;         // 重置报数
            }
        }
        
        i++; // 移动到下一个人
        if (i == n) i = 0; // 数到头了折返回来，形成环
    }
}
