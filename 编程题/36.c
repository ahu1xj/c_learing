#include<stdio.h>
#include <math.h>
int is_prime(int num)
{
	if(num<2) return 0;
	int limit=sqrt(num);
	for(int i=2;i<=limit;i++){
		if(num%i==0)
			return 0;
		else
			return 1;
	}

}
int main()
{
	int n,m;
	int sum=0;
	int count=0;
	scanf("%d %d",&m,&n);
	if(m<n&&m>=1&&n<=500)
	{
		for(int i=m;i<=n;i++)
		{
			if(is_prime(i)){
				count++;
				sum+=i;
			}
		}
	}
	printf("%d",sum);

}
