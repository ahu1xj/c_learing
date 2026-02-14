#include <stdio.h>
#include <math.h>
double fn( double x, int n );

int main()
{
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
double fn(double x,int n)
{
	if(n==1)
	return x;
	else 
	return (fn(x,n-1)+pow(-1,n-1)*pow(x,n));
}
/* 级数求和循环更高效
double fn( double x, int n ) {
    double sum = 0;
    double term = x; // 第一项是 x
    
    for (int i = 1; i <= n; i++) {
        sum += term;
        // 核心技巧：每一项等于前一项乘以 (-x)
        // 这样可以同时处理正负号交替和幂次增加，不需要调用 pow 函数
        term = term * (-x); 
    }
    
    return sum;
}
*/


