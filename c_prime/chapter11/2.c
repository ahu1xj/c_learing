#include <stdio.h>
#include <ctype.h>

void getnchar(char str[],int n){
	int i = 0;
    while (i < n-1)
    {
        str[i]=getchar();
        if (isspace(str[i]))
        {
            break;
        }
        i++;
    }
    str[i] = '\0';
}

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char str[n];
	getnchar(str,n);
	puts(str);
	return 0;

}
