#include <stdio.h>
// 小到大；
void sert_sort1(int num[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int key=num[i];
		//想想是扑克，大于key统一向后移动一位
		while(j>=0&&num[j]>key){
			num[j+1]=num[j];
			j--;
		}	
		num[j+1]=key;		

	}

}
void sert_sort2(int num[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int key=num[i];
		//想想是扑克，大于key统一向后移动一位
		while(j>=0&&num[j]<key){
			num[j+1]=num[j];
			j--;
		}	
		num[j+1]=key;		

	}

}
//这里是交换排序，交换排序是看到了小的立马转换
void sel_sort1(int num[],int n)
{
	for(int i=0;i<n-1;i++)
	{
			for(int j=i+1;j<n;j++)
				if(num[i]>num[j]){
					int tmp=num[i];
					num[i]=num[j];
					num[j]=tmp;
				}
	}
}
//这个才是选择排序
void sel_sort2(int num[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; // 记录这一轮最小值的“坑位”
        for (int j = i + 1; j < n; j++) {
            if (num[j] < num[min_idx]) {
                min_idx = j; // 只记下标，不动数据
            }
        }
        // 这一轮跑完了，看看最小值是不是就在 i，不是就换过来
        if (min_idx != i) {
            int tmp = num[i];
            num[i] = num[min_idx];
            num[min_idx] = tmp;
        }
    }
}
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}


	sert_sort2(num,n);
	for(int i=0;i<n;i++)
		printf("%d ",num[i]);
	printf("\n");
	sert_sort1(num,n);
	for(int i=0;i<n;i++)
		printf("%d ",num[i]);
	
	return 0;
}
