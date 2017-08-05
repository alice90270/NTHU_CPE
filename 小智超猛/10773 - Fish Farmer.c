#include <stdio.h>
int main(void){
    int a, b, N, i;
    char move;
    int num;
    scanf("%d%d", &a, &b);
    scanf("%d", &N);
    for(i=0; i<N; i++){
        while(getchar()!='\n');
        scanf("%c%d", &move, &num);
        if(move == 'A'){
            a = a*1.08 - num;
            b = b*1.08 + num;
        }else if(move == 'B'){
            a = a*1.08 + num;
            b = b*1.08 - num;
        }
    }
    printf("%d %d\n", a, b);
    return 0;
}
