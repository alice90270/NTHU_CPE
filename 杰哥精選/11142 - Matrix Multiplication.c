#include <stdio.h>

int main(){
    int n, m, p, i, j, k, l;
    long long int tem;
    while(scanf("%d", &n) != EOF){
        scanf("%d %d", &m, &p);
        int a[n][m];
        int b[m][p];
        long long int out[n][p];
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        for(i = 0; i < m; i++){
            for(j = 0; j < p; j++){
                scanf("%d", &b[i][j]);
            }
        }
        /*for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(i = 0; i < m; i++){
            for(j = 0; j < p; j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }*/
        for(i = 0; i < n; i++){
            for(j = 0; j < p; j++){
                tem = 0;
                for(k = 0; k < m; k++){
                    //printf("%d %d %d %d %d %d\n", tem, i, j, k, a[i][k], b[k][j]);
                    tem = tem+a[i][k]*b[k][j];
                }
                //printf("%d\n", tem);
                out[i][j] = tem;
            }
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < p; j++){
                if(j == p-1)
                    printf("%lld", out[i][j]);
                else
                    printf("%lld ", out[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
