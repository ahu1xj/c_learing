#include <stdio.h>
#define row 3
#define col 5
void print_arr(double num[row][col]){

	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++){
			printf("%lf\n",num[i][j]);
		}
}

void add_arr(double (*num1)[col],double (*num2)[col]){
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++){
			*(*(num2+i)+j)=2*num1[i][j];
		}
	
}

int main(){
	double num1[row][col]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	double num2[row][col];
	add_arr(num1,num2);
	print_arr(num2);

	return 0;
}
