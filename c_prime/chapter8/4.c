#include <stdio.h>
#include <ctype.h>
int main()
{
	// issplace 检测 制表符这些，ispunct检测！ ￥这类符号
	char ch;
	int word=0,letter=0;
	int flag=0;
	while((ch=getchar())!=EOF){
		//如果不是空的或者不是制表符那么就是新词

		if(isspace(ch)!=1&&ispunct(ch)!=1&&flag!=1){
			word++;
		}
		if(isalpha(ch)){
			letter++;
			flag=1;
		}else 
			flag=0;
		
	}
	printf("word %d\n",word);
	printf("letter %d\n",letter);
	double count=letter/word;
	printf("avarge %lf\n",count);
	return 0;

}
