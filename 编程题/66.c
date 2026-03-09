#include <stdio.h>
#include <string.h>
#include <ctype.h>
long long hex_char_to_val(char new_str[100])
{
	long long decimal=0;
	int str_len=strlen(new_str);
	for(int i=0;i<str_len;i++){
		char c=new_str[i];
		int val=0;
		if(isdigit(c))
			val=c-'0';
		else if(isupper(c))
			val=c-'A'+10;
		else if(islower(c))
			val=c-'a'+10;
		else
			return 0;

		decimal=decimal*16+val;
	}
	return decimal;
}


int main()
{
	char str[100];
	int i=0;

	while(i<100){
		char ch=getchar();
		if(ch=='#')
			break;
		str[i++]=ch;
	}
	str[i]='\0';
	char new_str[100];
	//0-9 a-f A-F 或者isxdigit
	int len=strlen(str);
	int key=-1;
	int j=0;
	for(int i=0;i<len;i++)
	{
		
		if((str[i]>='0'&&str[i]<='9')||(str[i]>='A'&&str[i]<='F')||(str[i]>='a'&&str[i]<='f'))
		{
			new_str[j]=str[i];
			if(key==-1)
				key=i;

			j++;	
		}
	}
	new_str[j]='\0';
	int flag=0;
	for(int i=0;i<key;i++)
	{
		if(str[i]=='-'){
			flag=1;
			break;
		}
	}
		
	if(flag==1)
		printf("-%lld",hex_char_to_val(new_str));
	else
		printf("%lld",hex_char_to_val(new_str));
	
	return 0;
}
