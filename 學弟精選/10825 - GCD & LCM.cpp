#include <stdio.h>
//#include "function.h"
int gcd(int a,int b)
{
	if(b==0) return a; 
	a=a%b;
	return gcd(b,a); 
	 
 } 
int lcm(int a,int b)
{
	int i;
	i=gcd(a,b);
	return 	i*(a/i)*(b/i);
}
int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d %d",gcd(x,y),lcm(x,y));

    return 0;
}
