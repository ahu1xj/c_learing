#include <stdio.h>
int find_max_index(double *num,int n){
	int max_index=0;
	for(int i=0;i<n;i++){
		if(*(num+i)>*(num+max_index))
			max_index=i;
	}

return max_index;

}
int main()
{
	double num[]={1,34,32,4234,24};
	int max_index;
	max_index=find_max_index(num,sizeof(num)/sizeof(num[0]));
	printf("%d\n",max_index);
	return 0;

}
