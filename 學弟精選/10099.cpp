#include <stdio.h>

int main(void)
{
	int a[50]={0},b[50]={0};
	int N,i,j,k;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&b[i]);
	}
	for(i=1;i<N;i++){
//		0 1 2 3 4
//		0 4 3 2 1
		a[i]=b[N-i];
	}
	a[0]=b[0];
	for(i=0;i<N;i++){
		for(j=-1*i;j<N-i;j++){
			// 0 1 2 3 4
			// 4 0 1 2 3
			k=j;
			if(k<0) k+=N;
			printf("%2d",a[k]);
		}
		printf("\n");
	}
	return 0;
 } 
