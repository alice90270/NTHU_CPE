#include <stdio.h> 
void pascalNum(int n)
{
	int a[15][15]={0} ;
	int i, j, k;
	a[0][0]=1;
	a[0][1]=1;
	for(i=1;i<15;i++){
		for(j=0;j<15;j++){
			if(j==0) a[i][j]=1;
			else {
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			} 
		}
	}
	if(n!=0){
		for(k=n-1,j=0;a[k][j]!=0;j++){
			printf("%6d",a[k][j]);	
		}
	} 
	printf("\n");
}
 
