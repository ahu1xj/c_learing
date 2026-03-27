#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int ch;
    int words = 0;
    int upper = 0;
    int lower = 0;
    int punct = 0;
    int digits = 0;
    bool in_word = false; // 标记当前是否正在一个单词内部

    printf("请输入文字（输入 Ctrl+D (Linux) 或 Ctrl+Z (Win) 结束并统计）:\n");

    while ((ch = getchar()) != EOF) {
        //  统计各类字符
        if (isupper(ch)) {
            upper++;
        } else if (islower(ch)) {
            lower++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (ispunct(ch)) {
            punct++;
        }

        // 单词统计逻辑
	if(!isspace(ch)&&!in_word){
		in_word=true;
		words++;
	}
	else if(isspace(ch)&&in_word)
		in_word=false;

	
    }

    printf("\n--- 统计报告 ---\n");
    printf("单词数: %d\n", words);
    printf("大写字母数: %d\n", upper);
    printf("小写字母数: %d\n", lower);
    printf("数字字符数: %d\n", digits);
    printf("标点符号数: %d\n", punct);

    return 0;
}
