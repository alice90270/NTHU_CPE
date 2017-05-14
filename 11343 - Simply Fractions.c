#include<stdio.h>
long long int gcd(long long int a , long long int b){
    if (a%b==0)
        return b;
    else
        return gcd(b, a%b);
}

int main(){
    int t;
    char sp;
    int a, b;
    long long int top, down;
    while(scanf("%d%c", &t, &sp)!=EOF){
        top=0;
        down=1;
        while(t--){
            scanf("%d %d", &a, &b);
            top=b*top+a*down;
            down=down*b;
        }
        long long int gcd_ans=1;
        gcd_ans=gcd(top, down);
        if(top%down==0)
            printf("%lld/%lld\n", top/down, 1);
        else
            printf("%lld/%lld\n", top/gcd_ans, down/gcd_ans);
    }

    return 0;
}
