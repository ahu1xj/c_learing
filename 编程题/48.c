#include <stdio.h>
#include <ctype.h>
int main()
{
	int x; // getchar函数的返回值是 int 
	
	while((x=getchar())!='\n')
	{
		if(isalpha(x))
		{
			if(islower(x))
				putchar((x-'a'+1)%26+'A');
			else 
				printf("%c",(x-'A'+1)%26+'a');
		}
		else 
			putchar(x);
	}

	putchar('\n');
	return 0;
}
