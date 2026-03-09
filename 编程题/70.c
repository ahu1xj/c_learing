#include <stdio.h>
struct complex_struct{
	double x,y;
}z1,z2;


int main()
{
	scanf("%lf %lf",&z1.x,&z1.y);	
	scanf("%lf %lf",&z2.x,&z2.y);	
	struct complex_struct z3;
	z3.x=z2.x+z1.x;
	z3.y=z2.y+z1.y;

	printf("(%.1f %.1f)",z3.x,z3.y);
	return 0;


}
