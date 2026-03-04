#include <stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0,e=0;
	int n;
	int score;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&score);
		if(score>=90)
			a++;
		else if(score>=80)
			b++;
		else if(score>=70)
			c++;
		else if(score>=60)
			d++;
		else 
			e++;

	}
	printf("%d %d %d %d %d\n", a, b, c, d, e);
}
