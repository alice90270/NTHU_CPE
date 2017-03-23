#include <stdio.h>

long long int gcd(long long int a, long long int b){
    long long int m, n, r, buff, out;
    m = a;
    n = b;
    while(1){
        if(m%n == 0){
            out = n;
            break;
        }
        buff = m;
        m = n;
        n = buff%n;
    }
    return out;
};

void all_gcd(long long int in1, long long int in2, long long int in3){
    long long int out1, out2, buf;
    out1 = gcd(gcd(in1, in2), in3);
    buf = in1*in2/gcd(in1, in2);
    out2 = buf*in3/gcd(buf, in3);
    printf("%lld %lld\n", out1, out2);
};

int main(){
    long long int n, i, in1, in2, in3, out;
    scanf("%lld", &n);
    for(i = 0; i < n; i++){
        scanf("%lld %lld %lld", &in1, &in2, &in3);
        all_gcd(in1, in2, in3);
        //out = gcd(in1, in2);
        //printf("%lld\n", out);
    }
    return 0;
}
