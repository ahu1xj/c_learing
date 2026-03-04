#include <stdio.h>
#include <math.h>
int main()
{
	int N;
	scanf("%d",&N);
	long long min=pow(10,N-1);
	long long max=pow(10,N)-1;

	for(long long i=min;i<max;i++)
	{
		long long tmp=i;
		long long sum=0;
		while(tmp>0)
		{
			int digit=tmp%10;
			sum+=pow(digit,N);
			tmp/=10;

		}
		if(sum==i)
			printf("%lld \n",sum);
	}
	return 0;
}
