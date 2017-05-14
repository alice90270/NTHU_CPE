#include<stdio.h>

int main(){
    long long int a, b;
    while(scanf("%lld %lld", &a, &b)!=EOF){
        //printf("a=%lld, b=%lld\n", a, b);
        int sum=0;
        int A=0;
        int B=0;
        int carry=0;

        while((a!=0)||(b!=0)){
            A=a%10;
            B=b%10;
            //printf("A+B+carry=%d+%d+%d\n", A, B, carry);
            if(A+B+carry>=10){
                sum++;
                carry=1;
            }
            else{
                carry=0;
            }
            a=a/10;
            b=b/10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
