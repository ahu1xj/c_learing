#include<stdio.h>
#include <math.h>
int main()
{
	double res=0;
	int x;
	    if (scanf("%d", &x) != 1) {
        return 0;
    }
	for(int i=1;i<=x;i++)
	{
		res+=pow(i,0.5);
	}
	printf("%.2f\n", res);
}
