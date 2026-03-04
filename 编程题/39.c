#include <stdio.h>
int main()
{
	int N;
	double sum=0;
	double numerator=2.0;
	double denominator=1.0;
	scanf("%d",&N);

	for(int i=0;i<N;i++)
	{
		sum+=numerator/denominator;
		double next_numerator=numerator+denominator;
		double next_denominator=numerator;
		numerator=next_numerator;
		denominator=next_denominator;
	}
	printf("%.2f",sum);
}
