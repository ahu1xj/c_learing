#include <stdio.h>
int main()
{

	int a,n;
	int sum=0;
	int tmp=0;
	scanf("%d %d",&a,&n);
	for(int i=0;i<n;i++)
	{
		
		if(i==0) {
			tmp=a;
		}
		else {
			a=a*10;
			tmp=tmp+a;
		}
		sum+=tmp;

	}
	printf("%d",sum);
}
