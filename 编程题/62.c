#include <stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int martix[m][n];

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&martix[i][j]);
	// int sum[m]={0};可变数组不可以直接初始化
	int sum[m];
	for(int i=0;i<m;i++)
	{	
		sum[i]=0;
		for(int j=0;j<n;j++)
			sum[i]+=martix[i][j];	
	}
	for(int i=0;i<m;i++)
		printf("%d\n",sum[i]);

	return 0;
}
