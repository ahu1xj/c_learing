#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char mode = 'p';

    if (argc > 1) {
        if (strcmp(argv[1], "-p") == 0) mode = 'p';
        else if (strcmp(argv[1], "-u") == 0) mode = 'u';
        else if (strcmp(argv[1], "-l") == 0) mode = 'l';
        else {
            printf("未知参数: %s。默认使用 -p。\n", argv[1]);
        }
    }

    int ch;
    printf("请输入文字 (输入 Ctrl+D 或 Ctrl+Z 结束):\n");

    while ((ch = getchar()) != EOF) {
        switch (mode) {
            case 'u':
                putchar(toupper(ch));
                break;
            case 'l':
                putchar(tolower(ch));
                break;
            case 'p':
            default:
                putchar(ch);
                break;
        }
    }

    return 0;
}
