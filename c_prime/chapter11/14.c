#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char *argv[]){

	//复习下argv【0】是程序名
	double base=atof(argv[1]);
	double exp=atof(argv[2]);

	double res=pow(base,exp);

	printf("%.2f",res);
	return 0;
}
