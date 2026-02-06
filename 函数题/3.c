#include <stdio.h>

void CharPyramid( int n, char ch );

int main()
{    
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

void CharPyramid( int n, char ch )
{
	int j=0;
	int tmp=n-1;
	for(j;j<n;j++)
	{ 
	
	for(int i=0;i<=tmp;i++)
	{
		printf(" ");
	}
	tmp--;
	for(int k=0;k<=j;k++)
	{
		printf("%c ",ch);
	}
	printf("\n");	
	
	}
}
