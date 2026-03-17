#include <stdio.h>


double power(double n, int p);

int main(void) {
    double x, xpow;
    int exp;


    while (scanf("%lf %d", &x, &exp) == 2) {
        xpow = power(x, exp); 
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair or q to quit: ");
    }

    return 0;
}

double power(double n, int p) {
 
    if (n == 0) {
        if (p == 0) return 1.0; 
        return 0.0;
    }
    if (p == 0) return 1.0;
	
    if(p>0)
	    return n*power(n,p-1);
    else 
	    return (1/n)*power(1/n,-p-1);
}
