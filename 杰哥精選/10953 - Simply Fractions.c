#include <stdio.h>

long long int gcd(long long int a, long long int b){
    long long int i, j, buf;
    i = a;
    j = b;
    while(1){
        if(i%j == 0)
            break;
        buf = i;
        i = j;
        j = buf%j;
    }
    return j;
}

int main(){
    long long int out[2], tmp, n, i, j;;
    while(scanf("%lld", &n)!=EOF){
        long long int in[n][3];
        for(i = 0; i < n; i++){
            scanf("%lld %lld", &in[i][0], &in[i][1]);
        }
        /*for(i = 0; i < n; i++){
            printf("%lld %lld\n", in[i][0], in[i][1]);
        }*/
        for(i = 0; i < n; i++){
            tmp = in[i][0];
            for(j = 0; j < n; j++){
                if(j == i)
                    continue;
                tmp = tmp*in[j][1];
            }
            in[i][2] = tmp;
        }
        /*for(i = 0; i < n; i++){
            printf("%lld %lld %lld\n", in[i][0], in[i][1], in[i][2]);
        }*/
        out[0] = 0;
        out[1] = 1;
        for(i = 0; i < n; i++){
            out[0] = out[0] + in[i][2];
            out[1] = out[1] * in[i][1];
        }
        //printf("%lld %lld\n", out[0], out[1]);
        printf("%lld/%lld\n", out[0]/gcd(out[0], out[1]), out[1]/gcd(out[0], out[1]));
    }
    return 0;
}
