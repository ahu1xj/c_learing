#include <stdio.h>
#include <assert.h>
int fn( int a, int n );
int SumA( int a, int n );
    
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));       
    printf("s = %d\n", SumA(a,n));    
    
    return 0;
}

int fn( int a, int n ){

	int res=0;
	for(int i=0;i<n;i++)
	{
		res+=a;
		a=a*10;
	}
	return res;
}
int SumA( int a, int n ){
	int tmp=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		tmp+=a;
		a=a*10;
		sum+=tmp;
	}
	return sum;
}
