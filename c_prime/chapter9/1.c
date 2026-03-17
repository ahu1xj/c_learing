#include <stdio.h>
double min(double x,double y){
	if(x>y)
		return y;
	else 
		return x;

}
int main()
{
	double x,y,z;

	x=12.3;
	y=13.0;
 	z=min(x,y);

	printf("%f",z);
	return 0;
	


}
