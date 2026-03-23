#include <stdio.h>
void show_arr(double *x,int n){
	for(int i=0;i<n;i++){
		printf("%lf\n",*(x+i));

	}

	
}
void add_num(double *num1,double *num2,int len)
{
	double num3[]={};
	for(int i=0;i<len;i++){
		*(num3+i)=num1[i]+num2[i];
	}
	show_arr(num3,len);
}
int main()
{
	double num1[]={2,4,5,8};
	double num2[]={1,0,4,6};
	add_num(num1,num2,sizeof(num1)/sizeof(num1[0]));
	return 0;


}
