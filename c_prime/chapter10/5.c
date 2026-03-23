#include <stdio.h>

int find(int *num,int n){
	int max_index=0;
	int min_index=0;
	for(int i=0;i<n;i++){
		if(*(num+max_index)<*(i+num))
			max_index=i;

	}
	for(int i=0;i<n;i++){
		if(*(num+min_index)>*(i+num))
			min_index=i;

	}

	return max_index-min_index;


}

int main(){

	int num[]={1,3,1,514,134};
	int max;
	max=find(num,sizeof(num)/sizeof(num[0]));

	printf("%d",max);
	return 0;

}
