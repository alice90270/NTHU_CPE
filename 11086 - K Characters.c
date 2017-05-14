#include <stdio.h>
int range[52];
int outputIndex[21];
char S[100];

void printCharacter(int N, int step, int fro){
    int i;
    //step=N時終止遞迴
    if(step == N){
        for(i = 0; i < N; i++){
            //printf("outputIndex[%d]=%d\n",i, outputIndex[i]);
            printf("%c", S[outputIndex[i]+1]);
        }
        printf("\n");
        return;
    }
    //step=0~N-1
    else{
        for(i = fro; i < 52; i++){
            // in the range
            if(range[i] != 0){
                outputIndex[step] = i;
                range[i]--;
                dfs(N, step+1, i);
                range[i]++;
            }
        }
    }
};

int main(){
    int T, M, N, i, j;

    scanf("%d", &T);
    // create set S from A~Z a~z
    for (i=1;i<=26;i++ ){
        S[i]=64+i;
        S[i+26]=96+i;
        //printf("S[%d]=%c\n", i, S[i]);
        //printf("S[%d]=%c\n", i, S[i+26]);
    }

    while(T--){
        scanf("%d %d", &M, &N);
        //inital 讓範圍落在M個裡面
        for(j = 0; j < 52; j++)
            if(j<M)
                range[j] = 1;
            else
                range[j] = 0;
        //recursion
        printCharacter(N, 0, 0);
        printf("\n");
    }
    return 0;
}
