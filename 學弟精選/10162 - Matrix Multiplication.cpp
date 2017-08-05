#include <stdio.h>
int a[25][25], b[25][25], c[25][25], n;
int func1(int x, int y){
 	int sum=0, i; 
 	for(i=0;i<n;i++){
 		sum = sum + a[x][i]*b[i][y] ; 
	 } 
	return sum; 
 } 
int main(void)
{
	int m, p;
	int i, j, l;
	scanf("%d %d", &m, &n); 
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	} 
	scanf("%d %d", &n, &p);
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			scanf("%d", &b[i][j]);
		}
	} 
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			c[i][j] = func1(i,j);
			printf("%d ", c[i][j]);
		}
		printf("\n"); 
	}
	return 0; 
 } 
 

