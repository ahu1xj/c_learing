#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	int min;
	int cur_num;
	scanf("%d",&min);
	for(int i=1;i<n;i++)
	{
		scanf("%d",&cur_num);
		if(cur_num<min)
		{
			min=cur_num;
		}
	}
	printf("min=%d\n",min);
}
