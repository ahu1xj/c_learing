#include <stdio.h>
#include <math.h>
#include <assert.h>
int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic( int number )
{
 
 	 int n=0;
 	 int tmp=number;
 	 int sum=0;
 	 while(tmp>0){
 	 	 n++;
 	 	 tmp/=10;
 	 }

tmp = number;
    while (tmp > 0) {
        int d = tmp % 10;     
        sum += pow(d, n);     
        tmp /= 10;            
    }
	
return (sum==number);
}

void PrintN( int m, int n )
{
	for(int i=m;i<n;i++)
	{
		if(narcissistic(i)){
		   	printf("%d\n",i);
		   	}
	}
}

