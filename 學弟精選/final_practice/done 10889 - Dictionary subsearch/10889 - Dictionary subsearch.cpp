#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char dict[1000][150];
int main(void)
{
	int i, j, k, n, sa, sb, T;
	char b[15];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %s",dict[i]);
	}
	scanf(" %s",b);
	sb=strlen(b);
	for(i=0;i<n;i++){
		sa=strlen(dict[i]);
		for(j=0;j<=sa-sb;j++){
			for(k=0;k<sb;k++){
				T=1;
				if(toupper(b[k])==toupper(dict[i][k+j])){
					continue;
				} 
				else{
					T=0;
					break;	
				} 
			}
			if(T) {
				printf("%s\n",dict[i]);
				break;
			}
		}
	}
	return 0;
}
