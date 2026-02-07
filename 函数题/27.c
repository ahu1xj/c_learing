#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
void ReadString(char s[]) {
    // [^\n] 表示读取除换行符以外的所有字符
    // %*c 表示读取并丢弃最后的那个换行符，防止残留在缓冲区影响下次输入
    scanf("%[^\n]%*c", s);
}
// 加深记忆*(s+i)=s[i];
void StringCount( char *s ) {
    int upper = 0, lower = 0, space = 0, digit = 0, other = 0;

    while (*s != '\0') {
        if (*s >= 'A' && *s <= 'Z') {
            upper++;
        } else if (*s >= 'a' && *s <= 'z') {
            lower++;
        } else if (*s == ' ') {
            space++;
        } else if (*s >= '0' && *s <= '9') {
            digit++;
        } else {
            other++;
        }
        s++; 
    }

}
/*
#include <stdio.h>
#include <ctype.h>

void StringCount( char *s ) {
    int letter = 0, blank = 0, digit = 0, other = 0;

    while (*s != '\0') {
        if (isalpha(*s)) {       // 检查是否为字母（包括大写和小写）
            letter++;
        } else if (isspace(*s)) { // 检查是否为空白字符（包括空格、回车、制表符等）
            // 注意：如果题目明确只要统计“空格”，则用 *s == ' '
            blank++;
        } else if (isdigit(*s)) { // 检查是否为数字
            digit++;
        } else {                 // 其它字符
            other++;
        }
        s++; // 移动到下一个字符
    }

    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
}

*/
