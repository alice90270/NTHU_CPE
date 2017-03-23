#include <stdio.h>

int numPrime(int start, int end){
	int i, j, ans=0, T;
	for(i=start;i<=end;i++){
		if(i==1) continue; 
		T=1;
		for(j=2;j*j<=i;j++){
			if(i%j==0) T=0; 
		}
		if(T==1) ans++; 
	} 
	return ans; 
} 
