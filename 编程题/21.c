#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int res;
	if(n<0)
		res=-1;
	else if(n==0)
		res=0;
	else 
		res=1;
		
	printf("sign(%d)=%d",n,res);

}
