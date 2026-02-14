#include <stdio.h>
#include <string.h>

#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void ReadString(char s[]) {
    // [^\n] 表示读取除换行符以外的所有字符
    // %*c 表示读取并丢弃最后的那个换行符，防止残留在缓冲区影响下次输入
    scanf("%[^\n]%*c", s);
}
//数组不可以=复制(char a[10]="xj" ,b[10]，b=a)用strcpy or strdup赋值,我在个代码只能删除一次，如果字符串有2个a,就删除了其中一个,指针的okchar *a = "hello";char *b;b = a; // 完全正确

// 重要：数组赋值和指针赋值区别。
void delchar( char *str, char c )
{
	int len=strlen(str);
	int count=0;
	for(int i=0;i<len;i++)
	{
		
		if(str[i]==c)
		{
			count++;
			for(int j=0;j<len-i-1;j++)
			{
				str[i+j]=str[i+j+1];
			}
		}
	}
	str[len-count]='\0';
}
// 双指针法
void delchar1(char *str,char c)
{
	int i, k = 0;
    for (i = 0; str[i] != '\0'; i++) {
        // 如果当前字符不是要删除的字符
        if (str[i] != c) {
            str[k] = str[i]; // 把它“捡起来”放到新位置
            k++;             // 新位置向后移
        }
    }
    // 最后在 k 的位置封口
    str[k] = '\0';
}
