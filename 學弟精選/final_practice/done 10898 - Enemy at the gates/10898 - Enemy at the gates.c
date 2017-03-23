#include <stdio.h>
int main(void)
{
	int n, i, j, nb;
	int s1, s2;
	int city[55]={0},road[60][60];
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d", &road[i][j]); 
		}
	}
	scanf("%d", &nb);
	for(i=0;i<nb;i++){
		scanf("%d %d", &s1, &s2);
		road[s1][s2]=0;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(road[i][j]!=0){
				city[i]=1;
				city[j]=1;
			} 
		}
	}
	for(i=1;i<=n;i++){
		if(city[i]==0) printf("%d\n", i);
	}
	return 0;
 } 
