#include <stdio.h>

int main(void)
{
    int low = 1;
    int high = 100;
    int mid = 50; // 初始猜测
    char resp;

    printf("Pick a number between 1 and 100.\n");
    printf("Is it %d? (y/n): ", mid);
// 要清理回车！！！ 更建议用scanf(" %c"  )自动跳过所有空格回车
    while ((resp = getchar()) != 'y') {
        while (getchar() != '\n'); 
        if (resp == 'n') {
            printf("Is it greater (>) or less (<) than %d?: ", mid);
            
            char dir = getchar();
            while (getchar() != '\n'); // 清理第二个 getchar 留下的回车
            if (dir == '>') {
                low = mid + 1;
            } else if (dir == '<') {
                high = mid - 1;
            }
         
            mid = low + (high - low) / 2;
            printf("Is it %d? (y/n): ", mid);
        } 
        else {
            printf("Error: please enter 'y' or 'n'.\n");
            printf("Is it %d? (y/n): ", mid);
        }
    }

    printf("I knew I could do it!\n");
    return 0;
}
