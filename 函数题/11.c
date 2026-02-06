#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

void hollowPyramid ( int n )
{
	int a=n;
	int b=-1;
	//先打印前面空心部分
	for(int i=0;i<n-1;i++)
		{
			//打印第一段空格
			for(int j=0;j<a-1;j++)
			{
				printf(" ");
			}
			a--;
			//打印数字
			if(n-a==1)
				printf("1");
			else
				printf("%d",n-a);
			//第二段空格
			for(int k=0;k<b;k++)
			{
				printf(" ");
			}
			b=b+2;
			
			if(n-a==1)
				printf(" ");
			else
				printf("%d",n-a);
				
			printf("\n");

		}
			//最后一行打印
			for(int c=0;c<2*n;c++)
			{
				printf("%d",n);
			}
}
/*思路二-gemini提供
void hollowPyramid ( int n )
{
    // 1. 处理顶端：第1行只有前面的空格和数字1
    for (int i = 1; i < n; i++) printf(" ");
    printf("1\n");

    // 2. 处理中间：从第2行到第n-1行
    for (int i = 2; i < n; i++) {
        // 打印前导空格：n-i个
        for (int j = 1; j <= n - i; j++) printf(" ");
        
        // 打印左侧数字
        printf("%d", i);
        
        // 打印内部空格：规律是 2*i - 3
        for (int j = 1; j <= 2 * i - 3; j++) printf(" ");
        
        // 打印右侧数字
        printf("%d\n", i);
    }

    // 3. 处理底座：第n行（如果n=1，前面的逻辑已经处理过了，这里加个判断防止重复）
    if (n > 1) {
        for (int i = 1; i <= 2 * n - 1; i++) {
            printf("%d", n);
        }
        printf("\n");
    }
}
*/

