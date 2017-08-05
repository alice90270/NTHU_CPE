#include <stdio.h>
#define rate 1.08
 
int main(void){
	freopen("test.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	int a, b, k, i, mov;
	char move;
	scanf("%d %d %d", &a, &b, &k);
	for(i=0;i<k;i++){
		a=a*rate;
		b=b*rate;
		while(getchar()!='\n');
		scanf("%c %d", &move,&mov);
		if(move=='A'){
			a-=mov;
			b+=mov;
		} else{
			a+=mov;
			b-=mov;
		}
	} 
	printf("%d %d\n", a, b);
	return 0; 
} 
