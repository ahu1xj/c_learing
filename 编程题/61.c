#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	int matrix[T][10][10];
	int res[T];
	int data[T];
	for(int i=0;i<T;i++){
		scanf("%d",&data[i]);
			for(int j=0;j<data[i];j++)
			       for(int k=0;k<data[i];k++)
			       		scanf("%d",&matrix[i][j][k]);	       
	}
	//判断，下三角部分就是j>k的地方
	for(int i=0;i<T;i++){
		res[i]=1;
		for(int j=0;j<data[i];j++)
			for(int k=0;k<data[i];k++)
				if(j>k){
					if(matrix[i][j][k]!=0)
						res[i]=0;
				}
	}

	for(int i=0;i<T;i++)
		if(res[i]==1)
			printf("yes\n");
		else 
			printf("n0\n");
}
