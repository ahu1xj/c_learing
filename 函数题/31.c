#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}


/* 你的代码将被嵌在这里 */
int search( int n ) {
    int count = 0;
    for (int i = 11; i * i <= n; i++) {
        int num = i * i;
   
        int a = num / 100;          // 百位
        int b = (num / 10) % 10;    // 十位
        int c = num % 10;           // 个位
        
        if (a == b || a == c || b == c) {
            if (!(a == b && b == c)) {
                count++;
            }
        }
    }
    return count;
}
