#include <stdio.h>
#include <string.h>
#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *match(char *s, char ch1, char ch2) {
    char *start = NULL;
    char *p = s;

    while (*p != '\0') {
        if (*p == ch1) {
            start = p; 
            break;
        }
        p++;
    }

    if (start == NULL) {
        printf("\n"); 
        return NULL;    
    }

    p = start; 
    while (*p != '\0') {
        printf("%c", *p);
        if (*p == ch2) {
            break; 
        }
        p++;
    }
    *(p+1)='\0';
    printf("\n"); 

    return start;
}
