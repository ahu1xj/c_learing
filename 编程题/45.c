#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int x=n/2;//起始空格
	//int y=x;
	int cnt=x;
	//打印上方的
	for(int i=0;i<=x;i++)
	{

		for(int j=0;j<x-i;j++)
		{
			printf(" ");
	
		}
		for(int k=0;k<2*i+1;k++)
		{
			printf("*");
		}	

		
		printf("\n");
	}

	for(int i=0;i<x;i++)
	{
	
		for(int j=0;j<=i;j++)
		{
			printf(" ");
		}
		
		for(int k=2*cnt-1;k>0;k--)
		{

			printf("*");
		}
		cnt--;
		printf("\n");
	}
	return 0;
}
