#include <stdio.h>
/*回顾下排序算法*/
void sort_bubble(int num[],int size)
{
	int tmp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1-j;j++)
		{
			if(num[j]>num[j+1])
			{
				tmp=num[j];
				num[j]=num[j+1];
				num[j+1]=tmp;
		}
	}	

}
}
int main()
{
	int nums[100];
	int count =0;
	char ch;

while (count < 100 && scanf("%d", &nums[count]) == 1) {
        count++;
        ch = getchar();
        if (ch == '\n') break; 
    }
	sort_bubble(nums,count);
	for(int i=0;i<count;i++)
	{
		printf("%d",nums[i]);
		if(i<count-1)
			printf("->");
	}
}	
