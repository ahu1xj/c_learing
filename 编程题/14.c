#include<stdio.h>
double fact(int n) {
	if(n==1)
	return 1;
    return n*fact(n-1);
}

int main()
{
	int n,m;
	double result;
	if (scanf("%d %d", &m,&n) != 2) {
        	return 1;
    }
    
    result = fact(n) / (fact(m) * fact(n - m));
    printf("result = %.0f\n", result);
	
}
