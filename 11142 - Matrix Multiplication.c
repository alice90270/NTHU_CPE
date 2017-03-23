#include<stdio.h>

int main(){
    int m, n, p;

    while(scanf(" %d %d %d",&m,&n,&p)!=EOF){
        long long int i=0;
        long long int j=0;
        long long int k=0;
        long long int sum=0;
        long long int A[m][n];
        long long int B[n][p];
        long long int C[m][p];

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%lld",&A[i][j]);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<p;j++){
                scanf("%lld",&B[i][j]);
            }
        }
        //C=A*B
         for(i=0;i<m;i++){
            for(j=0;j<p;j++){
                for(k=0;k<n;k++){
                    sum+=A[i][k]*B[k][j];
                }
                C[i][j]=sum;
                if(j!=p-1)
                    printf("%lld ",C[i][j]);
                else
                    printf("%lld",C[i][j]);
                sum=0;
                C[i][j]=0;
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
