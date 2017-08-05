#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int main(){
    int N, M, index, i, empty, times, num;
    int set[2000001], out[20000];
    while(1){
        scanf("%d", &N);
        if(N==0)    break;

        index=0;
        times=N;
        while(times--){
            scanf("%d", &set[index]);
            index++;
        }

        scanf("%d", &M);
        times=M;
        while(times--){
            scanf("%d", &set[index]);
            index++;
        }

        qsort(set, index, sizeof(int), cmp);

        empty=1;
        num=0;
        //printf("ans: ");
        for(i=1;i<=M+N;i++){
            //printf("set[%d]=%d\n", i, set[i]);
            if(set[i]==set[i-1]){
                out[num]= set[i];
                empty=0;
                num++;
            }
            set[i-1]=0;
        }
        if(empty==1)
            printf("empty\n");
        else{
            for(i=0;i<num;i++){
                if(i==num-1)
                    printf("%d\n", out[i]);
                else
                    printf("%d ", out[i]);
            }
        }
    }
    return 0;
}
