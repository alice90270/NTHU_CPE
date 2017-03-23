#include <stdio.h>
#include <stdlib.h>

int a[10001],b[10001],c[10001];
int main(void)
{
	int N;
	int len, i, j;
	int carry=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		carry=0;
		for(j=0;j<10001;j++){
			c[j]=0;
		}
		scanf("%d",&len);
		for(j=len-1;j>=0;j--){
			scanf(" %1d",&a[j]);
		}
		for(j=len-1;j>=0;j--){
			scanf(" %1d",&b[j]);
		}
		for(j=0;j<len;j++){
			c[j]=a[j]+b[j]+carry;
			carry=0;
			if(c[j]>=2){
				c[j]-=2;
				carry=1;
			}
		}
		for(j=len-1;j>=0;j--){
			printf("%1d",c[j]);
		}
		printf("\n");
	}
}
