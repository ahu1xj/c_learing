#include <stdio.h>
#include <string.h>
//倒序输出

char *res_str(char *dec,char *src){
	if(dec==NULL||src==NULL)
		printf("error\n");
	int i;
	for(i=0;i<strlen(src);i++){
		*(dec+i)=*(src+strlen(src)-1-i);
	}
	*(dec+i)='\0';
	return dec;
}

int main(){
	char *src="xj jxy";
	char dec[100];

	res_str(dec,src);
	printf("%s\n",dec);
	return 0;

}
