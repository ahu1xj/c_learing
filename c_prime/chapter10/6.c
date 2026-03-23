#include <stdio.h>

int* num_reverse(int *num,int n){
	for(int i=0;i<n/2;i++){
		int tmp=num[i];
		num[i]=num[n-1-i];
		num[n-1-i]=tmp;
	}

	return num;


}

int main(){
	int num[]={1,2,3,4,5};
	int *num1;
	num1=num_reverse(num,sizeof(num)/sizeof(num[0]));

	for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
		printf("%d\n",*(num1+i));

	}
	return 0;

}
