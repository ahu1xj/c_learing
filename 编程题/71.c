#include <stdio.h>

struct book {
	char title[100];
	double price;
};
int main()
{
	int n;
	scanf("%d",&n);
	//getchar();
	struct book b[n];
	for(int i=0;i<n;i++){
		
		scanf("%s",b[i].title);

		scanf("%lf",&b[i].price);
	}

	/*
	 *复习下排序 小到大
	 for(int i=1;i<n;i++){
	 	j=i-1;
		key=b[i].price;
		while(j>=0&&key<b[j].price){
			b[j+1]=b[j];
			j--;
		}
		b[j+1]=key;
		}
	 */

	int max_idx=0;
	int min_idx=0;
	for(int i=1;i<n;i++){
		if(b[i].price>b[max_idx].price)
			max_idx=i;
	}

	for(int i=1;i<n;i++){
		if(b[i].price<b[min_idx].price)
			min_idx=i;
	}
	printf("%.2f,%s\n",b[max_idx].price,b[max_idx].title);
	printf("%.2f,%s\n",b[min_idx].price,b[min_idx].title);

}
