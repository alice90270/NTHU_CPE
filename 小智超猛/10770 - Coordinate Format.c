#include<stdio.h>
int main(void){
    int m, n;
    int i, j;
    scanf("%d %d", &m, &n);
    int array[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if (array[i][j]!=0)
                printf("%d %d %d\n", i, j, array[i][j]);
        }
    }

    return 0;
}
