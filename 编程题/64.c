#include <stdio.h>
#include <string.h>
#include <ctype.h>
// 题目要求
int main()
{
    char c[100];

    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';

    int count = 0;
    int len = strlen(c); 
    for (int i = 0; i < len; i++) {
       
        if (iscntrl((unsigned char)c[i])) 
            continue; 
       
     
        if (c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U'||c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') {
            continue; 
        }
        
      	if(isupper(c[i]))
        	count++;
        else {
        	continue;
        }
    }

    printf("%d\n", count);
    return 0;
}
