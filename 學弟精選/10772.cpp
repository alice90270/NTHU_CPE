#include <stdio.h>
#include <string.h> 
int main(void){
	freopen("test.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	int x, i, l, k,sum=0,max=0,ocr;
	int len_a, len_b; 
	char a[5]={0};
	char b[10]={0};
	scanf("%s",a);
	len_a = strlen(a); 
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%s",b);	 
		len_b = strlen(b); 
		for(k=0;k+len_a<=len_b;k++){
			if(a[0]==b[k]){
				l=0;
				ocr=1;
				while(l<len_a){
					if(a[l]!=b[k+l]) ocr=0; 
					l++;
				}
				if(ocr) sum++; 
			}
		}
		max = max<=sum?sum:max;
		sum=0;
	}
	printf("%d",max);
	return 0; 
} 
