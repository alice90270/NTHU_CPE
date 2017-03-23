#include <stdio.h>
//#include <math.h> 
int main(void){
//	freopen("test.txt","r",stdin);
//	freopen("out.txt","w",stdout);
	int x, y, n, i, j, r, c;
	scanf("%d%d%d",&n,&x,&y);
//	int a[10][10] ={0};
//	a[x][y]=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			r = x>=i?(x-i):(i-x);
			c = y>=j?(y-j):(j-y);
//			a[i][j] = r+c; 
//			if(x>=i&&y>=j) a[i][j] = -(i-x+j-y);			 
//			else if(x<i&&y<j) a[i][j] = (i-x+j-y);
//			else if(x>=i&&y<j) a[i][j] = x-i+j-y; 
//			else if(x<i&&y>=j)a[i][j] =-(x-i+j-y); 
//			a[i][j] = abs(i-x)+abs(j-y); 
			printf("%3d",r+c);
		}
		printf("\n");
	}
	return 0; 
 } 
