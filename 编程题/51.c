#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int nums[100];
	// 使用
	for(int i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
	}

	int max=nums[0];
	int x=-1;
	for(int i=1;i<n;i++)
	{
		if(nums[i]>max){
			max=nums[i];
			x=i;
		}
	}

	if(x==-1)
		printf("%d %d",max,'x');
	else 
		printf("%d %d",max,x);
}

