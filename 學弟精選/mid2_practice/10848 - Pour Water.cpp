#include <stdio.h>
char Map[505][505];
void flooding(int R, int C, int pr, int pc)
{
	if(pc>=C||pc<0||pr>=R) return; 
	if(pr<R&&pr>=0){
		if(Map[pr][pc]=='H'){
			Map[pr][pc]='W';
			flooding(R,C,pr,pc+1); 
			flooding(R,C,pr,pc-1); 
			flooding(R,C,pr-1,pc); 
			flooding(R,C,pr+1,pc); 
		}
	} 	
 } 

int main(void){
//    freopen("test.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    
    int N,R,C,X,i,j,k;
    scanf("%d", &N);
    for(k=0;k<N;k++){
        scanf("%d%d%d", &R, &C, &X);

            for(i=0;i<R;i++){
                for(j=0;j<C;j++){
                    Map[i][j] = ' ';
                }
            }
            for(i=0;i<R;i++){
                scanf("%s", Map[i]);
            }

            flooding(R,C,0,X);
            for(i=0;i<R;i++){
                for(j=0;j<C;j++){
                    printf("%c", Map[i][j]);
                }
                printf("\n", Map[i][j]);
            }
            if(k<N-1)
                printf("\n", Map[i][j]);
    }
    return 0;
}
