#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

//void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

   // GetString(s);
    Shift(s);
    printf("%s\n", s);
    
    return 0; 
}

void Shift( char s[] )
{
    int len = strlen(s);
    char temp[4];
    int i;

    if (len <= 3) {
        return; 
    }
   for(i=0;i<3;i++){
     temp[i]=s[i];
     }
    temp[3]='\0';
    
  for(i=3;i<=len;i++){
     s[i-3]=s[i];
     }
 for (i = 0; i < 3; i++) {
        s[len - 3 + i] = temp[i];
    }   
    s[len] = '\0';
}
/*翻转实现
#include <string.h>
辅助函数：翻转字符串中从 left 到 right 的部分 
void reverse_part(char s[], int left, int right) {
    char temp;
    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

void Shift(char s[]) {
    int len = strlen(s);
    if (len <= 3) return; 长度不足 3 则无需处理 

 第一步：翻转前 3 个字符 (下标 0 到 2) 
    reverse_part(s, 0, 2);

  第二步：翻转剩余字符 (下标 3 到 len-1) 
    reverse_part(s, 3, len - 1);

  第三步：整体翻转 (下标 0 到 len-1) */
    reverse_part(s, 0, len - 1);
}
*/
