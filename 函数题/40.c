#include <stdio.h> 
#include <string.h>
char *match(char *s, char ch); 

int main(void )
{
    char ch, str[80], *p = NULL;

    scanf("%s", str);
    getchar();                 /* 跳过输入字符串和输入字符之间的分隔符 */
    ch = getchar();          /* 输入一个字符 */
    p = match(str, ch);     /* 调用函数match() */
    if( p != NULL ){        /* 找到字符ch */
        printf("%s\n", p);
    }else{ 
        printf("Not Found.\n");
    }

    return 0;
}

/* 请在这里填写答案 */
char *match(char *s,char ch)
{
	int len=strlen(s);
	int i=0;
	int num=-1;
	while(i<len)
	{
		if(*(s+i)==ch){
			num=i;
		}
		i++;
	}
//这里如果定义char *str就是错误的，这里只是定义了一个指针变量而没有真正的写入内存空间。
//定义str[len]也是错的，因为这是一个local variable(局部变量),函数执行后他就会消失。
/*
	char str[len];
	for(int j=0;j<len;j++)
	{
		str[j]=s[num+j];
	}
	
	return str;
*/
	if(num==-1)
	 return NULL;
	
	return (s+num); //&s[num]也ok
}
