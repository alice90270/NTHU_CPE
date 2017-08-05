#include <stdio.h>
#include <string.h>
char ac[1001],bc[1001];
long long int a,b;
int count=0;
int main(){
    //intput
    scanf("%lld",&a);
    scanf("%lld",&b);
    // int to string
    sprintf(ac,"%d",a);
    sprintf(bc,"%d",b);

    int i,j,len_a,len_b,carry,dig_c;
    len_a = strlen(ac);
    len_b = strlen(bc);
    carry = 0;
    dig_c = 0;

    for(i=len_a-1,j=len_b-1; i >=0|| j>=0;i--,j--){
        if(i<0)
            dig_c = bc[j] - '0' + carry;
        else if(j<0)
            dig_c = ac[i] - '0' + carry;
        else
            dig_c = ac[i] - '0' + bc[j] - '0' + carry;
        carry = dig_c / 10;
        if(carry == 1)
            count++;
    }
    printf("%lld %d\n",a+b,count);
}
