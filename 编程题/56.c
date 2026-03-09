#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int is_leap(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0)
		return 1;
	else 
		return 0;
}

int main()
{
// scanf("%d/%d/%d", &year, &month, &day); 就可以完成一样的功能
	char buf[20];
	fgets(buf,sizeof(buf),stdin);
	buf[strcspn(buf,"\n")]='\0';

	const char *s="/";
	char *data[3];
	char *token=strtok(buf,s);
	int i=0;
	//strtok返回的是 *
	while(token!=NULL){
		data[i]=token;
		i++;
		token=strtok(NULL,s);
	}
	int year,day,month;
	year=atoi(data[0]);
	month=atoi(data[1]);
	day=atoi(data[2]);

	int sum=0;
	int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};	
	for(int i=0;i<month-1;i++)
		sum+=month_days[i];

	sum+=day;

	if(is_leap(year)&&month>2)
		sum+=1;

	printf("%d",sum);

	return 0;


}
