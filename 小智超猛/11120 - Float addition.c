#include<stdio.h>
int first3(int x){
    return x/1000;
}
int last3(int x){
    return x%1000;
}
int main(void)
{
    int a, b, c, d, e, f, g, h;
    int c1, c2, c3, c4;
    scanf("%d,%d,%d.%d\n%d,%d,%d.%d", &a, &b, &c, &d, &e, &f, &g, &h);
    c4 = last3(d+h);
    c3 = last3(c+g+first3(d+h));
    c2 = last3(b+f+first3(c+g+first3(d+h)));
    c1 = a+e+first3(b+f+first3(c+f+first3(d+h)));
    printf("%d%03d%03d.%03d", c1, c2, c3, c4);
    return 0 ;
}
