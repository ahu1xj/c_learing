#include <stdio.h>
//键盘输入CRTL+D输入EOF；
int main(void)
{
    int ch, ct = 0;

    printf("Please enter some characters:\n");
    while ((ch = getchar()) != EOF)
    {
        ++ct;
    }
    printf("Characters: %d\n", ct);

    return 0;
}
