#include <stdio.h>
//#include "function.h"
void hanoi(int n, char A, char B, char C)
{
	if(n>0){
	
		hanoi(n-1,A,B,C);
		printf("%d\n",n);
		hanoi(n-1,B,C,A);
	}
 } 
int main(){
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
