#include <stdio.h>
#include <stdlib.h>

struct fri{
	char str0[11];//长度加1 存\0
	char str1[9];
	char str2[18];
};

int main()
{
	int n;
	scanf("%d",&n);
	
	struct fri z[n];
	for(int i=0;i<n;i++){
		scanf("%s %s %s",z[i].str0,z[i].str1,z[i].str2);
	}
	
	for(int i=0;i<n-1;i++){
		int max_idx=i;
		for(int j=i+1;j<n;j++){
			if(atol(z[j].str1)<atol(z[max_idx].str1))
					max_idx=j;
		}
		if(max_idx!=i){
			struct fri tmp;
			tmp=z[i];
			z[i]=z[max_idx];
			z[max_idx]=tmp;
		}
	}
	
	for(int i=0;i<n;i++)
		printf("%-12s %-10s %s\n",z[i].str0,z[i].str1,z[i].str2);

	return 0;

}
