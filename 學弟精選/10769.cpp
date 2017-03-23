#include <stdio.h>

int main(void){
	freopen("test.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	int a[11][11]={0}, n, i, j, k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	} 
	for(k=2;k<=2*n;k++){	
		for(i=k-1;i>=1;i--){
			if(i==1&&k-i<=n&&i<=n)
				printf("%d",a[i][k-i]);
			else if(k-i<=n&&i<=n) 
				printf("%d ",a[i][k-i]);
		}
		printf("\n"); 
	}
	return 0; 
} 
