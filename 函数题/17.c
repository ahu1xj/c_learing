#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
int reverse( int number ){
	int flag=1;
	int res=0;
	if(number<0){
	 flag=-1;
	 number=-number;
	 }
	 
	while(number>0){
	 res=res*10+(number%10);
	 number/=10;
	 }
 	return res*flag;
}

