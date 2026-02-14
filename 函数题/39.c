#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void printdigits( int n ) {
 
	if(n/10==0)
	printf("%d\n",n);
	else {
	printdigits(n/10);
	printf("%d\n",n%10);
	}
}
/*
#include <string.h>

void printdigits(int n) {
    char s[20];
    sprintf(s, "%d", n); // 把整数打印到字符串数组里
    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c\n", s[i]);
    }
}
*/
