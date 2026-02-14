#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;
    
    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

char *getmonth( int n ) {
    // 使用 static 确保数组在函数返回后依然存在于内存中
    static char *months[] = {
        "January", "February", "March", "April", 
        "May", "June", "July", "August", 
        "September", "October", "November", "December"
    };

    if (n >= 1 && n <= 12) {
        return months[n - 1];
    } else {

        return NULL;
    }
}
