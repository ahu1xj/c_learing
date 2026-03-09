#include <stdio.h>
#include <ctype.h>
int main()
{
	/*-----getchar 会把12拆成1和2----------
	while((x=getchar())!='=')
	{
		if(isdigit(x))
			{
				nums[i]=x;
				i++;
			}
		else
		{
			bufs[j]=x;
			j++;
		}


	}
	for(int k=0;k<j;k++)
		{
			int i=0;
			switch(bufs[k]) {
			case '+' :{ nums[i+1]=nums[i]+nums[i+1]; break;}
			case '-' :{ nums[i+1]=nums[i]-nums[i+1]; break;}
			case '*' :{ nums[i+1]=nums[i]*nums[i+1]; break;}
			case '/' :{ nums[i+1]=nums[i]/nums[i+1]; break;}
		default: printf("error");
		}
	}
	printf("%d",nums[i+1]);
	return 0;
	---------------------*/
	char op[100];
	int nums[100];
	int nums_count=0;
	int op_count=0;
	

if (scanf("%d", &nums[nums_count]) == 1) {
    nums_count++;
}


while (op_count < 100) {
 
    if (scanf(" %c", &op[op_count]) == 1) {
        if (op[op_count] == '=') break;
        op_count++;
    } else {
        break;
    }

    if (scanf("%d", &nums[nums_count]) == 1) {
        nums_count++;
    } else {
        break;
    }
}
int i;	
	for(i=0;i<op_count;i++)
	{
		switch(op[i]) {
		case '+':
			nums[i+1]+=nums[i];
			break;
		case '-':
			nums[i+1]=nums[i]-nums[i+1];
			break;
		case '*':
			nums[i+1]*=nums[i];
			break;
		case '/':
			if (nums[i+1] != 0)
                   	 nums[i+1] = nums[i] / nums[i+1];
                else
                    	printf("Division by zero!\n");
                break;
		default:
			printf("error"); break;
	}
	}
	if(op_count>=0)
		printf("%d\n",nums[nums_count-1]);
	return 0;
}
