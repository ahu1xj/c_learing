#include <stdio.h>
#include <stdlib.h>
#define EXTRA_HOUR 1.5
#define BASE_TAX 0.15
#define EXTRA_TAX 0.2
#define EXCEED_TAX 0.25
//这题目的意思是基本工资有1-4档
void show_menu(void)
{

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                        2) $9.33/hr\n");
    printf("3) $10.00/hr                       4) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");
    printf("Please you choose(1-4 )or q : ");
    
}
void cal_salary(int num){
	double base_salary;
	switch(num){
		case 1: base_salary=8.75; break;
		case 2:base_salary=9.33; break;
		case 3:base_salary=10.00; break;
		case 4:base_salary=11.20; break;
		default:printf("Please you choose 1-4\n");
	}
	printf("enter the working hours a week\n");
	int hours;
	if(scanf(" %d",&hours)!=1)
		printf("error\n");
	getchar();// 吃掉回车
	
	double tax,taxed_salary,salary;
	salary=(hours>40)?(base_salary*40+(hours-40)*1.5*base_salary):base_salary*hours;
	if(salary<=300)
		tax=salary*BASE_TAX;
	else if(salary<=450)
		tax=300*BASE_TAX+(salary-300)*EXTRA_TAX;
	else 
		tax=300*BASE_TAX+150*EXTRA_TAX+(salary-450)*EXCEED_TAX;

	taxed_salary=salary-tax;

	printf("salary: %.2f\n",salary);
	printf("tax: %.2f\n",tax);
	printf("taxed_salary:%.2f\n",taxed_salary);

	//return 0;

}
int main() {
    char ch;
    while (1) {
	    show_menu();
	    scanf(" %c",&ch);
	    if(ch=='q')
		    break;
	    
	  
	if (ch == '5') {
            printf("Bye!\n");
            break;
        } else if (ch < '1' || ch > '4') {
            printf("Invalid choice! Please choose 1-4 or 5 to quit.\n");
        } else {
            cal_salary(ch-'0');
        }
}
}
