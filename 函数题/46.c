#include <stdio.h>
#include <string.h>
#define MAXS 30

char *search(char *s, char *t);

void ReadString(char s[]) {
    // [^\n] 表示读取除换行符以外的所有字符
    // %*c 表示读取并丢弃最后的那个换行符，防止残留在缓冲区影响下次输入
    scanf("%[^\n]%*c", s);
}
int main()
{
    char s[MAXS], t[MAXS], *pos;
    
    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n",(int)(pos - s));
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
// 两层循环，先扫描s,然后扫描错从扫描的地方开始扫描t
char *search(char *s, char *t) {
	char *p=s;
	while(*p!='\0')
	{
		char *p1=p;
		char *p2=t;
		while(*p2!='\0'&&*p2==*p1)
		{
			p1++;
			p2++;
		}
		if(*p2=='\0'){
			return p;
		}
		p++;
	}


    return NULL;
}
