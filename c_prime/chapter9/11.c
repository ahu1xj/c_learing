#include <stdio.h>
unsigned long Fibonacci(unsigned n)
{
	//int num[n]={0,0};可变数组不可以初始化
	if(n==0) return 1;
	if(n==10) return 1;
	unsigned  long num[n+1];
	num[0]=1;
	num[1]=1;

	int i=2;
	do{
		num[i]=num[i-1]+num[i-2];
		i++;
	}while(i<=n);

	return num[n];
}


int main()
{
	unsigned n;
	scanf("%u",&n);
	printf("%lu",Fibonacci(n));

	return 0;

}
