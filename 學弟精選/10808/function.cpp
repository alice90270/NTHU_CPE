#include <stdio.h>

int length_greater_than_one(char c, int length, int n){
	int i, j, k;
	for(k=0;k<n;k++){
		for(i=1;i<=length;i++){
			for(j=0;j<i;j++){
				printf("%c", c);
			} 
			printf("\n");
		} 
		for(i=length-1;i>1;i--){
			for(j=0;j<i;j++){
				printf("%c", c);
			} 
			printf("\n");
		}
	} 

	return 0; 
}
