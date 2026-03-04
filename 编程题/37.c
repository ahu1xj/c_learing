#include <stdio.h>
int is_odd(int num)
{
	return num%2!=0;
}
int main()
{
	int sum=0;
	while(1)
	{
		int num;
		if(scanf("%d",&num)!=1)
			break;

		if(num<=0)
			break;
		if(is_odd(num))
			sum+=num;
	}

	printf("%d",sum);
}
