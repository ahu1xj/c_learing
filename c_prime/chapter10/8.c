#include <stdio.h>

void copy_ptr(double *x, const double *source, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(x + i) = *(source + i);
    }
}
void show_arr(double *x,int n){
	for(int i=0;i<n;i++){
		printf("%lf\n",*(x+i));

	}

	
}
int main(){
	double num[]={1,2,3,4,5,6,7};
	double num1[3]={};

	copy_ptr(num1,num+2,3);
	show_arr(num1,3);
	return 0;


}
