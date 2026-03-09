#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);

	int martix[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&martix[i][j]);
}
}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			int old_j = (j - n+ m) % m;// 想像是波动拨时钟+n就是顺时针动，+m 就像是“如果你逆时针拨过头了（变成负数），就多转一圈回来”。
            		printf("%d ",martix[i][old_j]);
	}
		printf("\n");	
}
return 0;
}

