#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int matrix[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&matrix[i][j]);
	
	int found=0;
	for (int i = 0; i < n; i++) {
        // 找行的最大值
        int max_val = matrix[i][0];
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
        	//具体定位到i,j
            if (matrix[i][j] == max_val) {
                //验证这个 matrix[i][j] 是否为第 j 列的最小值
                int is_saddle = 1;
                for (int k = 0; k < n; k++) {
                    if (matrix[k][j] < max_val) {
                        is_saddle = 0;
                        break;
                    }
                }

                if (is_saddle) {
                    printf("%d %d\n", i, j);
                    found = 1;
                }
            }
        }
        if (found) break; 
    }

    if (!found) printf("NONE\n");

    return 0;
}
				
				
		
