#include <stdio.h>
#define ROW 2
#define COL 3
//拷贝数组

void copy_ptr(double *x, const double *source, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(x + i) = *(source + i);
    }
}
//p264 int pt[][cols]==int (*pt)[cols]
void show_arr(double num[][COL],int rows){
	for(int i=0;i<rows;i++){
		for(int j=0;j<COL;j++){
		printf("%lf\n",*(*(num+i)+j));
		}
	}
	
}
int main()
{
	double num[2][3]={
	{1,2,3},
	{4,5,6}
	};

	double num1[2][3]={};

	for(int i=0;i<ROW;i++)
	{
		copy_ptr(*(num1+i),*(num+i),COL);//数组指针一定要匹配
	}
	show_arr(num,ROW);
	show_arr(num1,ROW);
	return 0;

}
