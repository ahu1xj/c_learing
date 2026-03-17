#include <stdio.h>

void larger_of(int *x,int *y){
	if(*x>*y)
		*y=*x;
	else
		*x=*y;

}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);

	larger_of(&x,&y);
	printf("%d %d",x,y);
	return 0;

}
