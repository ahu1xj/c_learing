#include <stdio.h>
#include <string.h>
/*
long long  get_weigth(char str[100])
{
	long long  sum=0;
	for(int i=0;i<strlen(str);i++){
		int value=(int)str[i];
		sum+=value;
	}
	return sum;

}
int main()
{
	char str[5][100];
	for(int i=0;i<5;i++)
		scanf("%99s",str[i]);

	
	char *ptrs[5];
    char temp[1000]; // 临时缓冲区

    for (int i = 0; i < 5; i++) {
        scanf("%999s", temp);
        ptrs[i] = malloc(strlen(temp) + 1); // 按需分配内存
        strcpy(ptrs[i], temp);
    }

	 
	//我的想法是给每个字符设置权重
	long long weight[5];

	for(int i=0;i<5;i++)
	       weight[i]= get_weigth(str[i]);

	//插入排序
	for(int i=0;i<5;i++)
	{
		int j=i-1;
		int key=weight[i];
		while(j>=0&&weight[j]>key){
			weight[j+1]=weight[j];
			j--;
		}
		weight[j+1]=key;
	
	}
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			if(get_weigth(str[j])==(long long)weight[i])
				printf("%s\n",str[j]);
		}
	return 0;
}
*/

long long get_weight(char str[100]) {
    long long sum = 0;
    for (int i = 0; str[i] != '\0'; i++) { // 这样写比 strlen 效率更高
        sum += (unsigned char)str[i];
    }
    return sum;
}

int main() {
    char str[5][100];
    long long weight[5];

    // 1. 读入并预计算权重
    for (int i = 0; i < 5; i++) {
        if (scanf("%99s", str[i]) != 1) break;
        weight[i] = get_weight(str[i]);
    }

    // 2. 插入排序（同步交换权重和字符串）
    for (int i = 1; i < 5; i++) {
        long long key_weight = weight[i];
        char key_str[100];
        strcpy(key_str, str[i]); // 备份当前的字符串

        int j = i - 1;
        // 如果前一个比当前的大，就往后挪
        while (j >= 0 && weight[j] > key_weight) {
            weight[j + 1] = weight[j];
            strcpy(str[j + 1], str[j]); // 同步挪动字符串
            j--;
        }
        weight[j + 1] = key_weight;
        strcpy(str[j + 1], key_str); // 放入正确位置
    }

    // 3. 直接输出排序后的结果
    printf("\n--- 按 ASCII 总和排序后的结果 ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Weight: %lld, String: %s\n", weight[i], str[i]);
    }

    return 0;
}
