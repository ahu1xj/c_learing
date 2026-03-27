#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_NUM 10
#define MAX_LEN 100
void show_menu() {
    printf("\n------------------------------------\n");
    printf("1. 打印源字符串列表\n");
    printf("2. 按 ASCII 顺序打印\n");
    printf("3. 按长度递增顺序打印\n");
    printf("4. 按第一个单词的长度打印\n");
    printf("5. 退出\n");
    printf("请选择: ");
}
// 牢记：`int (* pt)[4]等价于int pt[][4]`
void print_str(char *pt[]){
	while(*pt!=NULL){
		puts(*pt);
		pt++;
	}

}
int get_first_word_len(const char *s) {
    int len = 0;
    while (isspace(*s) && *s != '\0') s++; // 跳过前导空格
    while (!isspace(*s) && *s != '\0') {
        len++;
        s++;
    }
    return len;
}
//函数指针
int comp_ascii(const char *s1, const char *s2) { return strcmp(s1, s2); }
int comp_len(const char *s1, const char *s2) { return strlen(s1) - strlen(s2); }
int comp_first_word(const char *s1, const char *s2) { 
    return get_first_word_len(s1) - get_first_word_len(s2); 
}

//排序算法
void sort_str(char *pt[],int n,int (*compare)(const char *,const char *)){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(compare(pt[j],pt[j+1])>0){
				char *tmp=pt[j];
				pt[j]=pt[j+1];
				pt[j+1]=tmp;
			}
}
}
}
int main() {
    char input[MAX_NUM][MAX_LEN];
    char *ptrs[MAX_NUM + 1]; // +1 是为了给 NULL 留位置
    int count = 0;

    
    printf("请输入最多 %d 行字符串 (空行或 EOF 结束):\n", MAX_NUM);
    while (count < MAX_NUM && fgets(input[count], MAX_LEN, stdin) != NULL) {
        if (input[count][0] == '\n') break;
        ptrs[count] = input[count];
        count++;
    }
    ptrs[count] = NULL; 

    int choice;
    while (1) {
        show_menu();
        if (scanf("%d", &choice) != 1 || choice == 5) break;

        switch (choice) {
            case 1:
                for(int i=0; i<count; i++) printf("%s", input[i]);
                break;
            case 2:
                sort_str(ptrs, count, comp_ascii);
                print_str(ptrs);
                break;
            case 3:
                sort_str(ptrs, count, comp_len);
                print_str(ptrs);
                break;
            case 4:
                sort_str(ptrs, count, comp_first_word);
                print_str(ptrs);
                break;
            default:
                printf("无效选择！\n");
        }
    }
    printf("程序结束。\n");
    return 0;
}
