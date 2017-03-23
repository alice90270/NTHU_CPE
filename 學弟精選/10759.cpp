#include <stdio.h>

int main(void){
//	freopen("test.txt","r",stdin);
//	freopen("out.txt","w",stdout);
	
	int n, i, j;
	int a[100][100]={0}, b[100][100]={0}, compare;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			compare = a[i][j]>=b[i][j]?b[i][j]:a[i][j];
			printf("%d",compare);
			if(j!=n-1) printf(" ");
		}
		printf("\n");
	} 	
	return 0; 
} 
