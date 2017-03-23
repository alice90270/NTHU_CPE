#include <stdio.h>

int main(void){
	
	int a[4]={0};
	scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
	if(a[1]-a[0]==a[2]-a[1]){
		printf("%d %d", a[3]+(a[2]-a[1]), a[2]-a[1]);
	} 
	else{
		printf("%d %d", a[3]*(a[2]/a[1]), a[2]/a[1]); 
	}
	return 0; 
} 
