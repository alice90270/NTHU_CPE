#include<stdio.h>
int main(void)
{
    int i, x;
    float ans;
    scanf("%d",&x);
    i=(x%10)*100+(x%100-x%10)+(x-x%100)/100;
    ans = (float)(i+x)/2;
    printf("%4.1f", ans);
    return 0;
}

