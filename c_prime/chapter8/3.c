#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int i=0,j=0;
	while((ch=getchar())!=EOF){
		if(isupper(ch))
			i++;

		if(islower(ch))
			j++;

	
	}
	printf("\n");
	printf("i=%d,j=%d",i,j);

	return 0;

}
