#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, result;

    if (scanf("%lf", &x) != 1) {
        return 1;
    }
    if(x>=0)
    {
	result=sqrt(x);
}
 	else 
 	{
 		result=pow(x+1,2)+2*x+1/x;
	}
	printf("f(%.1f) = %.1f\n", x, result);
	return 1;
}
