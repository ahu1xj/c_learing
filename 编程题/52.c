#include <stdio.h>
#include <string.h>
#include <assert.h>
int main()
{
	int num1[20];
	int num2[20];
	int i=0;
	int j=0;
	while(scanf("%d",&num1[i])==1)
	{
		i++;
		char ch=getchar();
		if(ch=='\n')
			break;
	}
		
	while(scanf("%d",&num2[j])==1)	
	{
		j++;
		char ch=getchar();
		if(ch=='\n')
			break;
	}
	// strlen不可以计数int 他是计算字符串char的

	
	
	for(int x=0;x<i;x++)
	{
		int count1=0;
		int tmp=num1[x];
		for(int y=0;y<j;y++)
		{
			if(tmp==num2[y])
				count1++;
				break;
		}
		if(count1==0){ //查重逻辑因该是只有-》当它和前面所有元素都不相等时			
				int is_repeated=0;
				for(int k1=0;k1<x;k1++) {
					if(num1[x]==num1[k1])
						is_repeated=1;
					}
				if(is_repeated==0)
					printf("%d ",num1[x]);	
			}		

	}

	for(int x=0;x<j;x++)
	{
		int count2=0;
		int tmp=num2[x];
		for(int y=0;y<i;y++)
		{
			if(tmp==num1[y])
				count2++;
		}
		if(count2==0){
				int is_repeated=0;
				for(int k1=0;k1<x;k1++) {
					if(num2[x]==num2[k1])
						is_repeated=1;
					}
				if(is_repeated==0)
					printf("%d ",num2[x]);				
					}
	
	}
	
	printf("\n");
	return 0;
}
