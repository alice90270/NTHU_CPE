#include <stdio.h>

int main(){
    long long int n, m, i, j, tmp;
    long long int out_r, out_c;
    while(scanf("%lld", &m)!=EOF){
        scanf("%lld", &n);
        int in[m][n];
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                scanf("%lld", &in[i][j]);
            }
        }
        /*for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("%lld ", in[i][j]);
            }
            printf("\n");
        }
        printf("\n");*/
        out_r = 1000000;
        out_c = 1000000;
        //row
        for(i = 0; i < m; i++){
            tmp = 0;
            for(j = 0; j < n; j++){
                tmp = tmp + in[i][j];
            }
            if(tmp < out_r)
                out_r = tmp;
        }
        //col
        for(i = 0; i < n; i++){
            tmp = 0;
            for(j = 0; j < m; j++){
                tmp = tmp + in[j][i];
            }
            if(tmp < out_c)
                out_c = tmp;
        }
        printf("%lld ", out_c);
        printf("%lld\n", out_r);
    }
    return 0;
}
