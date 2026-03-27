#include <stdio.h>
#include <string.h>

char *string_in(char *dec, char *src) {
    int len_dec = strlen(dec);
    int len_src = strlen(src);

    // 如果源字符串比目标字符串还长，肯定找不着
    for (int i = 0; i <= len_dec - len_src; i++) {
        // 只比较 src 长度那么多的字符
        if (strncmp((dec + i), src, len_src) == 0) {
            return dec + i;
        }
    }
    return NULL;
}

int main() {
    char *src = "at";
    char *dec = "hats";
    
    char *res = string_in(dec, src);
    
        printf("Found: %s\n", res); 
    
    return 0;
}
