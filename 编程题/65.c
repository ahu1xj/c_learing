#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char c[100];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c, "\n")] = '\0';
	int len=strlen(c);
	for(int i=0;i<len;i++){
		char new_c;
		if(isupper(c[i]))
		{
			new_c='A'+'Z'-c[i];
		}
		else 
			new_c=c[i];

		printf("%c",new_c);
	}
	printf("\n");
return 0;
	
}
