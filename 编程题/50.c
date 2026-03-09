#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char buf[100];
	fgets(buf,sizeof(buf),stdin);
	buf[strcspn(buf, "\n")] = '\0';
	for(int i=0;buf[i]!='\0';i++) {
		if(islower(buf[i]))
				buf[i]=buf[i]-32;
	}
	printf("%s\n",buf);
	return 0;
	//直接使用函数toupper('a')->'A' tolower相反
}
