#include <stdio.h>
#include <ctype.h>
int read_position(char ch)
{
	if(islower(ch))
		return ch-'a'+1;
	else if(isupper(ch))
		return ch-'A'+ 1;
	else 
		return -1;
}

int main()
{
	char ch;

	while((ch=getchar())!=EOF){
		printf("%d",read_position(ch));

	}

	return 0;



}
