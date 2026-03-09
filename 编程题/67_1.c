#include <stdio.h>
#include <string.h>
//strcmp函数应用（字典序）
int main() {
    char str[5][100];
    for (int i = 0; i < 5; i++) {
        scanf("%99s", str[i]);
    }
 	/*
    // 插入排序：使用 strcmp 进行字典序比较
    for (int i = 1; i < 5; i++) {
        char key[100];
        strcpy(key, str[i]);
        int j = i - 1;

        // strcmp(a, b) > 0 表示字符串 a 在字典里排在 b 后面
        while (j >= 0 && strcmp(str[j], key) > 0) {
            strcpy(str[j + 1], str[j]);
            j--;
        }
        strcpy(str[j + 1], key);
    }

    printf("After sorted:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }
    */
    // 选择排序
    for(int i=0;i<4;i++){
    	int min_idx=i;
    	for(int j=i+1;j<5;j++){
    		if(strcmp(str[j],str[min_idx])<0)
    			min_idx=j;
    		}
    	if(min_idx!=i)
    		{
    			char tmp[100];
    			strcpy(tmp,str[i]);
			strcpy(str[i],str[min_idx]);
			strcpy(str[min_idx],tmp);

    		}
    }
    for(int i=0;i<5;i++)
    	printf("%s\n",str[i]);
    	
  		
    return 0;
}

