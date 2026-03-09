#include <stdio.h>
#include <string.h>
int main()
{
	char str[80];
	// 这里用strlen是错误的，char 定义后他存在乱码了，就用sizeof
	fgets(str,sizeof(str),stdin);
	for(int i=strlen(str)-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
