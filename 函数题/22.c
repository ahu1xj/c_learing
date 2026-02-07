#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}
// 数组退化
void ArrayShift( int a[], int n, int m )
{
   int tmp[MAXN];

	if(m>n) {
	  printf("error");
	
	  }
	else {
		for(int i=0;i<m;i++)
		{
			tmp[i]=a[n-m+i];
		}
	tmp[MAXN-1]='\0';
	}
	//为啥错了？a[3]=a[1] a[4]=a[2];已经覆盖了 
	/*
	for(int j=0;j<n-m;j++)
	{
		a[j+m]=a[j];
	}
	*/
	for (int j = n - m - 1; j >= 0; j--) {
        a[j + m] = a[j];
    }
	for(int k=0;k<m;k++)
	{
		a[k]=tmp[k];
	}
}

