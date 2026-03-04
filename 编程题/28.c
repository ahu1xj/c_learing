#include <stdio.h>

int main()
{
	int num[2];
	int count=0;
	char ch;
	while(count<2&&scanf("%d",&num[count])==1)
	{
		count++;
		ch=getchar();
		if(ch=='\n')
		{
			break;
		}
	
	}
	int speed=num[0];
	int limit=num[1];
	double exceed_ratio=(double)(speed-limit)*100/limit;
	int x=(int)(exceed_ratio+0.5);// 四舍五入
	if(speed<=limit)
		printf("ok\n");
	else if(x<10)
		printf("ok\n");
	else if(x<50)
		printf("exceed %d%.| ticket 200\n",x);
	else 
		printf("exceed %d%.| license revoked",x);
	return 0;
}
