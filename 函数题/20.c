#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;
    
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);
    
    return 0;
}
// c 语言强制转换，%只能用于int类型
void splitfloat( float x, int *intpart, float *fracpart )
{
/* 1. 获取整数部分：利用强制类型转换的截断特性 */
    *intpart = (int)x;
/* 2. 获取小数部分：原数减去整数部分 */

    *fracpart = x - *intpart;
	
}
