#include <stdio.h>
double cal_e(int n)
{
	double sum=1.0;
	double tmp=1.0;
	for(int i=1;i<=n;i++)
	{
		tmp/=i;
		sum+=tmp;
	}
	return sum;
}	
int main()
{
	int n;
	scanf("%d",&n);
	double res=cal_e(n);
	printf("%.8f",res);
	return 0;
}
