#include <stdio.h>
int main()
{
	double high,n;
	double sum=0;
	scanf("%lf %lf",&high,&n);

	if(n==0) {
		printf("0.0,0.0\n");
		return 0;
}
	sum=high;
	for(int i=0;i<n;i++)
		{
		
			high/=2.0;
			sum+=high*2;
		}
	printf("%.1f,%.1f",sum,high);
	return 0;
}
