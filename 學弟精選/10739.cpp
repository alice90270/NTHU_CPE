#include <stdio.h>

int main(void){
//	freopen("testcase.txt","r",stdin) ;
//	freopen("output.txt","w",stdout) ;
	int x, i, k, j, a[12]={0}, sum=0;
	scanf("%d", &x);
	a[0] = x; 
	for(i=0;i<12&&a[i]>=2;i++){
		a[i]=x%2;
		x=x/2;
		a[i+1]=x;
	}
	a[0]++;
	for(k=0;a[k]==2;k++){
			a[k]=0;
			a[k+1]++; 
			sum++;
	}
	if(a[k]==1&&k>i)i=i+1;
	for(k=i;k>=0;k--){
		printf("%d",a[k]);
	}
	printf(" %d", sum);
	return 0;
}
