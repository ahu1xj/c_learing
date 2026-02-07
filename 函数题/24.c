#include <stdio.h>
#include <string.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}
void ReadString(char s[]) {
    // [^\n] 表示读取除换行符以外的所有字符
    // %*c 表示读取并丢弃最后的那个换行符，防止残留在缓冲区影响下次输入
    scanf("%[^\n]%*c", s);
}
void strmcpy( char *t, int m, char *s )
{
	int i=0;
	int len=strlen(t);
	if(m>len){ printf("error");}
	
	for(;t[m-1+i]!='\0';i++)
	{
		s[i]=t[m-1+i];
	}
	s[i]='\0';
}

