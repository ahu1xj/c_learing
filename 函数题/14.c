#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
    
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number ) {
    if (number <= 1) return 0; 
    int sum = 1; 
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}

void PrintPN( int m, int n ) {
    int count = 0; 
    for (int i = m; i <= n; i++) {
        if (factorsum(i) == i) {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0) {
    }
    printf("\n");
}
