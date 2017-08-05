#include<stdio.h>
int main(void){
    int i, j = 1, M, x;
    scanf("%d",&M);
    int array[100]={0};
    array[0]=1;
    for(i=1; i<100;i++){
        if(array[i-1]==i)
            array[i]=1;
        else
            array[i]=array[i-1]+2;
    }
    for(i=0;i<M;i++){
        int N;
        scanf("%d", &N);
        printf("%d\n", array[N-1]);
    }
    return 0;
}
