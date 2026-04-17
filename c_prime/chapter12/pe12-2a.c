#include <stdio.h>
#include "pe12-2a.h"

enum {US=0,UN=1};
static int mode;
static double range;
static double fuel;

void set_mode(int flag)
{
	if(flag==1)
		mode=UN;
	else
		mode=US;
	
}

void get_info()
{
	
    if (mode==US)
    {
        printf("Enter distance traveled in kilometers: ");
    }
    else
    {
        printf("Enter distance traveled in miles: ");
    }
    scanf("%lf", &range);

    if (mode==US)
    {
        printf("Enter fuel consumed in liters: ");
    }
    else
    {
        printf("Enter fuel consumed in gallons: ");
    }
    scanf("%lf", &fuel);


}

void show_info()
{
	printf("\n");
	if(mode==US)
		printf("Fuel consumption is %.1f liters per 100km\n",range/fuel);
	else 
		printf("Fuel consumption is %.1f miles per gallons\n",range/fuel);
}
