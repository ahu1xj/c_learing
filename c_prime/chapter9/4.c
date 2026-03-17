#include <stdio.h>

double harmonic_mean(double x,double y){
	double z;
	if(x==0||y==0)
		printf("error");
	else 
		z=2.0/(1/x+1/y);

	return z;

}
int main()
{
	double x,y;
	scanf("%lf %lf",&x,&y);
	printf("%f",harmonic_mean(x,y));

	return 0;


}
