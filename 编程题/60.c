#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	
	int num[N];

	for(int i=0;i<N;i++){
		scanf("%d",&num[i]);
	}
	int count[10]={0};

	for(int i=0;i<N;i++){
		int tmp=num[i];
		do{
			count[tmp%10]++;
			tmp=tmp/10;
		}while(tmp>0);
	}
	int MAX=-1;
	for(int i=0;i<10;i++)
	{
		if(MAX<count[i])
		{
			MAX=count[i];
		}
	}
	
	printf("%d:",MAX);
	for(int i=0;i<10;i++)
		if(MAX==count[i])
			printf("%d ",i);

	return  0;
	
}	
	
