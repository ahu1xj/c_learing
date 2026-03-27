#include <stdio.h>
#include <ctype.h>

int my_atoi(char *str){
	int res=0;
	int sign=1;
	while(isspace(*str)){
		str++;
	}
	while(isalpha(*str)){
		str++;
	}
	if(*str=='+'||*str=='-'){
		if(*str=='-'){
			sign=-1;
		}
		str++;
	}
	while (isdigit(*str)) {
        // 将字符转换为对应的数值：*str - '0'
        	res = res * 10 + (*str - '0');
        	str++;
    }
	return sign*res;

}

int main(){
	char *str="   aasf-1324dar";
	printf("%d\n",my_atoi(str));
	return 0;

}
