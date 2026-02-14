#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};
    
    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);
    
    return 0;
}
/*
char *str_cat(char *s, char *t) {
    char *p = s;
    while (*p) p++; // 走到 s 的尽头
    while ((*p++ = *t++)); // 拷贝 t 到 p，直到遇到 t 的 \0 停止
    return s;
}
*/
/* 你的代码将被嵌在这里 */
char *str_cat(char *s,char *t)
{
	char *p=s;
	
	while(*p!='\0')
	{
		p++;
	}
	
	while(*t!='\0')
	{
		*p=*t;
		p++;
		t++;	
	}
	*p='\0';
	
	return s;
}
/* strcat(s,t);就ok了 */
