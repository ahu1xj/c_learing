#include <stdio.h>
#include <string.h>
int main()
{
	char c;
	scanf("%c",&c);
	getchar();

	char str[100];
	//这样写是错了，因为输入后会留下\n fegts都没法子执行,要加入getchar或者用scanf(" %c",) 加入一个空格就是告诉scanf自动清理
	fgets(str,sizeof(str),stdin);
	for(int i=0;i<sizeof(str);i++)
	{
		if(c==str[i])
		{
			printf("index=%d\n",i);
			break;
		}
	}
	return 0;
}
