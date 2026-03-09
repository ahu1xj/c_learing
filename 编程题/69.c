#include <stdio.h>
int main()
{
	int h,m,s,n;
	scanf("%d:%d:%d",&h,&m,&s);
	scanf("%d",&n);
	long long total=h * 3600 + m * 60 + s + n;
	//处理大于24h
	total=total%(3600*24);
	
	int new_h=total/3600;
	int new_m=(total/3600)/60;
	int new_s=total%60;
	
	printf("%02d:%02d:%02d",new_h,new_m,new_s);

	return 0;
}
