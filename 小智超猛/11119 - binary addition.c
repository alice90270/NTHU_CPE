#include <stdio.h>
#include <string.h>
int main(void)
{
    int a, b, c = 1, d = 0, carries = 0, x, y;
    scanf("%d", &x);
    a = x + 1;
    while(a!=0){
        b = a%2;
        a = a/2;
        d = d+b*c;
        c = c*10;
    }
    y = d;
    while(1){
        if(y%10 == 0){
            carries = carries + 1;
            y = y/10;
        }
        else
            break;
    }
    printf("%d %d", d, carries);
    return 0 ;
}
