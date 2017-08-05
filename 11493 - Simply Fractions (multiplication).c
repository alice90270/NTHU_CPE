#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int x, int y){
    if(x%y==0)
        return y;
    else
        return gcd(y, x%y);
}

int testcase;

int main(){
    while(scanf("%d", &testcase)!=EOF){
        long long int product_a, product_b, gcd_ab, ans_a, ans_b, a, b;
        int neg;
        neg=0;
        product_a=1;
        product_b=1;
        ans_a=1;
        ans_b=1;
        gcd_ab=0;
        while(testcase--){
            scanf("%lld %lld", &a, &b);
            if(a<0)
                neg++;
            if(b<0)
                neg++;
            product_a=product_a*a;
            product_b=product_b*b;
            gcd_ab=gcd(product_a, product_b);
            product_a= product_a/gcd_ab;
            product_b= product_b/gcd_ab;
        }
        if(neg%2==1)
            printf("-%lld/%lld\n", abs(product_a), abs(product_b));
        else
            printf("%lld/%lld\n", product_a, product_b);
    }
    return 0;
}
