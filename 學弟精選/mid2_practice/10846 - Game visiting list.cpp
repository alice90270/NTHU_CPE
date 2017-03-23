#include <stdio.h>
#include <stdlib.h>
extern int NPClist[100][10]; //global array 來自外部(eg:main,function.h...) 
void findNPC(int num)
{
	int k=0;
	printf("%d\n",num); 
	while(NPClist[num][k]!=0){
		findNPC(NPClist[num][k++]);
	}
 } 
int main() {
//    freopen("test.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 0; ; j++) {
            scanf("%d", &NPClist[i][j]);
            if(NPClist[i][j] == 0) break;
        }
    }
    findNPC(1);
    return 0;
}
