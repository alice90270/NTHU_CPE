#include <stdio.h>

	int array[1005][1005]={0};
int main(void){
	
	int i, j, k, l, N, K;

	scanf("%d %d", &N, &K);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<N;i++){
		for(l=0;l<K;l++){
			for(j=0;j<N;j++){
				for(k=0;k<K;k++){
				if(j==N-1&&k==K-1) printf("%d",array[i][j]);
				else printf("%d ",array[i][j]);
				}
			}
			printf("\n");
		}
		
		
	}
	return 0;
}

