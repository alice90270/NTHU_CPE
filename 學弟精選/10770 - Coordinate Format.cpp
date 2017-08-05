#include <stdio.h>

int main(void){
	freopen("test.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	int a[100][100]={0}, r, c, i, j;
	scanf("%d %d", &r, &c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0){
				printf("%d %d %d\n", i, j, a[i][j]);
			} 
		}
	}
	return 0; 
} 
