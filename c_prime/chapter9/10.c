#include <stdio.h>


void to_base_n(unsigned long num,unsigned int n){
	int r;
	
	if(n<2||n>10)
		printf("1<n<10 \n");
	
	r=num%n;
	if(num>=n)
		to_base_n((unsigned long)num/n,n);

	putchar('0'+r);

}

int main()
{
	unsigned long num;
	unsigned int n;
	scanf("%lu %u",&num,&n);
	
	to_base_n(num,n);


	return 0;
	

}
