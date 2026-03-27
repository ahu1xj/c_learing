#include <stdio.h>
#include <ctype.h>
char *get_word(char *str,int n){
	//检查单词前的空白
	char ch;
	while((ch=getchar())!=EOF&&isspace(ch)){
		continue;
	}
	int i=0;
	char *ptr=str;
	do {
        	*ptr++ = (char)ch;
		i++;
    	} while ((ch = getchar()) != EOF && !isspace(ch)&&i<n);

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
	int n;
	scanf("%d",&n);
    	if (get_word(input,n)) {
        	printf("提取到的单词是: [%s]\n", input);
    	}

    	return 0;
}
