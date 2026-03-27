#include <stdio.h>
#include <ctype.h>
char *get_word(char *str){
	//检查单词前的空白
	char ch;
	while((ch=getchar())!=EOF&&isspace(ch)){
		continue;
	}
	
	char *ptr=str;
	do {
        	*ptr++ = (char)ch;
    	} while ((ch = getchar()) != EOF && !isspace(ch));

    	*ptr = '\0';
    	//清理单词后的空白
    	if (ch != '\n' && ch != EOF) {
        while ((ch = getchar()) != EOF && ch != '\n') {
            continue;
        }
    }
    	return str;
}
int main() {
    char input[100];

    if (get_word(input)) {
        printf("提取到的单词是: [%s]\n", input);
    }

    return 0;
}
