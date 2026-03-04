#include <stdio.h>
void print_nemu()
{
	printf("[1] apple\n");

	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");
	return ;

}
void print_price(int idx)
{
	switch(idx) {
	case 1: printf("price=3.00\n"); break;
	case 2: printf("price=2.50\n"); break;
	case 3: printf("price=4.10\n"); break;
	case 4: printf("price=10.20\n"); break;
	}
	
}
int main()
{
	int nums[5];
	int count=0;
	int tmp;
	//键盘输入的东西存在缓冲区
	/*
	假设你输入了：5 10[回车]
	缓冲区内容：['5'][' ']['1']['0']['\n']
	执行 scanf("%d", &temp)
	缓冲区内容：[' ']['1']['0']['\n']
	执行getchar(),拿走缓冲区第一个。
	缓冲区内容：['1']['0']['\n']
	*/
	while(scanf("%d",&tmp)==1){
		if(count<5)
		{
			nums[count]=tmp;
		}
		count++;
		char ch=getchar();
		if(ch=='\n')
			break;
	}
	print_nemu();
	for(int i=0;i<=count;i++)
	{
		print_price(nums[i]);
	}	
	

}
