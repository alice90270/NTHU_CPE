#include <stdio.h>

int main(void)
{
	int x, y, i, a[8]={0}, k;
	
	scanf("%d %d", &x, &y);
	a[0] = x; 
	for(i=0;i<=7;i++)
	{
		if(a[i]<3)break; 
		a[i]=x%3;
		x=x/3;
		//a[i+1]=x;
	}
	for(k=y-1;k>=0;k--)
	{
	 	printf("%d",a[k]);
	}
	printf("\n");
	return 0; 
 } 
