#include <stdio.h>
#include <string.h>
char *my_strchr(char *str,char ch){
	char *pt=str;
	while(*pt!='\0'){
		if(*pt==ch)
		{
			return pt;
			break;
		}
		else
			pt++;

	}
	return NULL;

}

int main(){
	char ch;
	scanf("%c",&ch);
	getchar();//scanf不吃换行
	char str[100];
	fgets(str,100,stdin);//他会把\n也加入
	int i=0;
	while(str[i]!='\n')
		i++;

	str[i]='\0';
	char *ret_ch;
	ret_ch=my_strchr(str,ch);
	printf("%s %p",ret_ch,ret_ch);
	return 0;

	

}
