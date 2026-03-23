 #include <stdio.h>

int find_max(int *num,int n){
	int max=*(num);
	for(int i=0;i<n;i++){
		if(*(num+i)>max)
			max=*(num+i);
	}

	return max;

}
int main(){
	
	int num[]={1,3,1,514,134};
	int max;
	max=find_max(num,sizeof(num)/sizeof(num[0]));
	
	printf("%d",max);
	return 0;

}
