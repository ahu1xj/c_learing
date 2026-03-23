#include <stdio.h>
void copy_arr(double x[], const double source[], int n)
{
    for (int i = 0; i < n; i++)
    {
        x[i] = source[i];
    }
}
void copy_ptr(double *x, const double *source, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(x + i) = *(source + i);
    }
}
void copy_ptrs(double *x, const double *source, const double *end)
{
    for (int i = 0; i < end - source; i++)
    {
        *(x + i) = *(source + i);
    }
}
void show_arr(double *x,int n){
	for(int i=0;i<n;i++){
		printf("%lf\n",*(x+i));

	}

	
}
int main(void)
{
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[1];
	double target2[2];
	double target3[3];
	   
       	copy_arr(target1, source, 5);
   	printf("Target1:\n");
    	show_arr(target1, 5);

    	copy_ptr(target2, source, 5);
    	printf("Target2:\n");
    	show_arr(target2, 5);

    	copy_ptrs(target3, source, source + 5);
    	printf("Target3:\n");
    	show_arr(target3, 5);

	return 0;
	

}
