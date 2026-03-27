#include <stdio.h>

void remove_str(char *src){
	char *fast=src;
	char *slow=src;
	while(*fast!='\0'){
		if(*fast!=' '){
			*slow=*fast;
			slow++;
		}
		fast++;
	}
	*slow='\0';

}
// 这样是错误的，这样src是只读数据
int main(){
	//char *src="xj jxy";
	char src[]="xj jxy";
	remove_str(src);
	printf("%s\n",src);
	return 0;
}
