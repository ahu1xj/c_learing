#include <stdio.h>
int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	int a=M;
	int b=N;

	int tmp;
	while(b!=0){
		tmp=a%b;
		a=b;
		b=tmp;
	}
	int gcd=a;
	int lcm=(M/gcd)*N;

	printf("%d %d",gcd,lcm);
}
