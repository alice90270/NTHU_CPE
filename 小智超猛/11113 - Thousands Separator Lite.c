
#include <stdio.h>
int first3(int x){
    return x/1000;
}
int last3(int x){
    return x%1000;
}
int main(void)
{
    int a, b, c, d, e, f;
    int c1, c2, c3;
    while( scanf("%d,%d,%d\n%d,%d,%d", &a, &b, &c, &d, &e, &f) !=EOF){
    c3 = last3(c+f);
    c2 = last3(b+e+first3(c+f));
    c1 = a+d+first3(b+e+first3(c+f));
    printf("%d%03d%03d\n", c1, c2, c3);
    }
    return 0 ;
}
