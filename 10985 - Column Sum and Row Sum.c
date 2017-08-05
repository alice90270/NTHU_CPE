#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int M, N;

int main(){
    while(scanf("%d %d", &M, &N)!=EOF){
        long long int sum, row_min, col_min, i, j;
        int array[M][N];
        sum=0;
        row_min=2199999999;
        col_min=2199999999;
        for(i=0;i<M;i++){
            for(j=0;j<N;j++){
                scanf("%d", &array[i][j]);
                }
        }
        for(i=0;i<M;i++){
            sum=0;
            for(j=0;j<N;j++){
                sum+=array[i][j];
            }
            if(sum<col_min){
                col_min=sum;
            }
        }
        for(j=0;j<N;j++){
            sum=0;
            for(i=0;i<M;i++){
                sum+=array[i][j];
            }
            if(sum<row_min){
                row_min=sum;
            }
        }
        printf("%lld %lld\n", row_min, col_min);
    }
    return 0;
    }
