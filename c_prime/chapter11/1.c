#include <stdio.h>

void getnchar(char str[],int n){
	int i=0;
	do{
		str[i]=getchar();
		i++;
	}while(i<n);
	str[i]='\0';		

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
