#include <stdio.h>
int main(void)
{
	int week, i;
	int W[45]={0,1,2,4,6};
	scanf("%d",&week);
	for(i=5;i<=week;i++){
		W[i]=2*W[i-1]-W[i-3];
	}
	printf("%d\n",W[week]);
}
