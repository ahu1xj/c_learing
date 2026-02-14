#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10
#define MAXS 20

int max_len( char *s[], int n );

int main()
{
    int i, n;
    char *string[MAXN] = {NULL};
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        string[i] = (char *)malloc(sizeof(char)*MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int max_len(char *s[],int n)
{
	int i;
	int max=-1;
	int len=strlen(s[0]);
	for(i=0;i<n;i++)
	{
		if(len<strlen(s[i]))
		{
			len=strlen(s[i]);
			max=len;
		}
	}
	return max;
}
