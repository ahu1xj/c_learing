 #include <stdio.h>
#include <ctype.h>
char get_frist(void){
	
	int ch;
	
	do{
		ch=getchar();
	}
	while(isspace(ch)&&ch!=EOF);//isspace返回是非0

	return ch;
}
int main()
{
	char ch_frist;
	ch_frist=get_frist();
	
	printf("%c\n",ch_frist);
	return 0;
}
