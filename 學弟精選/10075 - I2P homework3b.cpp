#include <stdio.h>

int main(void)
{
	int a[10],visited[10]={0},count=0;
	int i;
	for(i=1;i<=9;i++){
		scanf("%d",&a[i]);
	}
	i=1;
	while(visited[i]!=1){
		count+=a[i];
		i=a[i];
		visited[1]=1;
	}
	printf("%d\n",count);
	return 0;
 } 
