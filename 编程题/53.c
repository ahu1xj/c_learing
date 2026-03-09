#include <stdio.h>
int main()
{
	//使用二维数组
	int n;
	scanf("%d",&n);
	int sum=0;
	//我本来计划是用getchar()读取\n的，但是其实scanf会自动跳过\n等制表符
	int martix[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&martix[i][j]);
				if(i!=n-1&&j!=n-1&&i+j!=n-1)
				{
					//printf("%d\n",martix[i][j]);
					sum+=martix[i][j];
				}
		}
	}
	printf("%d",sum);
}
