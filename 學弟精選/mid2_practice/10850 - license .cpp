#include <stdio.h>
int Hit[10000]; 
void sort(char *a)
{
	int i, j, tmp; 
	for(i=1;i<4;i++){
		j=i;
		while(j>0&&*(a+j-1)>*(a+j)){
			tmp = *(a+j);
			*(a+j) = *(a+j-1);
			*(a+j-1) = tmp; 
			j--;
		}
	}
 } 
int main(void)
{
	char str[5];
	int n, i, j, k, l, sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);	
		sort(str);
		for(sum=0,l=0,k=1000;l<4;l++,k/=10){
			sum+=(str[l]-'0')*k;
		}
		Hit[sum]++;
	} 
	for(i=0;i<10000;i++){
		if(Hit[i]>1){
			printf("%04d\n",i);
		} 
	}
	return 0; 
 } 
