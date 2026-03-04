#include <stdio.h>
#include <math.h>
#include <stdbool.h>
double len_cal(int x1,int y1,int x2,int y2)
{
	double len=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return len;
}
bool is_triangle(double len1,double len2,double len3)
{
	if(len1+len2>len3&&len1+len3>len2&&len2+len3>len1)
		return true;
	else 
		return false;
}
int main()
{
	int nums[6];
	int count =0;
	char ch;

while (count < 6 && scanf("%d", &nums[count]) == 1) {
        count++;
        ch = getchar();
        if (ch == '\n') break; 
    }
	double len1=len_cal(nums[0],nums[1],nums[2],nums[3]);
	double len2=len_cal(nums[0],nums[1],nums[4],nums[5]);
	double len3=len_cal(nums[4],nums[5],nums[2],nums[3]);
	if(is_triangle(len1,len2,len3))
	{
		printf("L=%.2f",len1+len2+len3);
		double	p = (len1 + len2 + len3) / 2.0;
       		double area = sqrt(p * (p - len1) * (p - len2) * (p - len3));
		printf("A=%.2f",area);
	}
	else 
		printf("impossible");
}


