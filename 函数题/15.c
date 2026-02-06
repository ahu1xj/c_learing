#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n) {
    int a = 1, b = 1, temp;
    int i;
    
    if (n == 1 || n == 2) return 1;
    
    for (i = 3; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

void PrintFN(int m, int n) {
    int i = 1;
    int f_val = 0;
    int count = 0; 

    while (1) {
        f_val = fib(i);
        
        if (f_val > n) break; 
        
        if (f_val >= m) {
            if (count > 0) printf(" ");
            printf("%d", f_val);
            count++;
        }
        i++;
    }

    if (count == 0) {
        printf("No Fibonacci number");
    }
    printf("\n");
}
