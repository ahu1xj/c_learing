
#include <stdio.h>

int main() {
    int n;
    int flag=-1;
    double sum = 0.0;


    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
	if(i==1)
	sum=1;
	else{
        sum = sum + (1.0 /(3*i-2))*flag;
        flag=-flag;
        }
    }

    printf("sum = %.3f\n", sum);

    return 0;
}


