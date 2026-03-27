#include <stdio.h>
#include <ctype.h>
char *mystrncpy(char *dec,char *src,int n){
	if(dec==NULL||src==NULL||n<=0)
		printf("error\n");

	int i=0;
	while(i<n)
	{
		*(dec+i)=*(src+i);
		i++;
	}
	dec[i]='\0';
	return dec;

}

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
int main(){
	int n;
	scanf("%d",&n);
	char dec[n];
	char str[n];
	get_word(str,n);
	mystrncpy(dec,str,3);
	printf("%s\n",dec);
	return 0;

}
