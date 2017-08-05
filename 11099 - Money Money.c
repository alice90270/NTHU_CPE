#include<stdio.h>

int main(){
    long long int X, Y, Z;
    scanf("%lld %lld %lld", &X, &Y, &Z);
        long long int jay, jolin, jj, sum;
        /*
        x= jay+ jolin;
        y= jolin+ jj;
        z= jay+ jj;
        */
        sum= (X+Y+Z)/2;
        jj=sum-X;
        jay=sum-Y;
        jolin=sum-Z;
        printf("%lld %lld %lld\n", jay, jolin, jj);
return 0;
}
