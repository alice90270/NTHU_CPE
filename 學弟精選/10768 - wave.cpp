#include <stdio.h>

int main(void){
//	freopen("test.txt","r",stdin);
//	freopen("out.txt","w",stdout);
	
	int i, j, k, L, w;
	char c;
	scanf("%c %d %d", &c, &L, &w); 
	
	for(k=0;k<w;k++){							
		for(i=1;i<=L;i++){				
			for(j=0;j<i;j++){			
				printf("%c",c); 
			}
			if(k==w-1&&L==1) break; 
			printf("\n");
		}
		for(i=L-1;i>1;i--){
			for(j=0;j<i;j++){
				printf("%c",c);
			}
			printf("\n");
		}
	} 
	if(L!=1) printf("%c",c);
	
	return 0; 
} 
