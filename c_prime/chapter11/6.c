#include <stdio.h>
#include <string.h>
int is_within(char *str,char ch){
	char *pt=str;
	while(*pt!='\0'){
		if(*pt==ch)
		{
			return 1;
			break;
		}
		else
			pt++;

	}
	return 0;

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
	int ret_ch;
	ret_ch=is_within(str,ch);
	if(ret_ch==1)
		printf("%c is present\n",ch);
	else  
		printf("%c is not present\n",ch);

	return 0;

	

}
