#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int set1, set2, ABS, out, max;
    int N, i, j, temp;
    while(1){
        scanf("%d", &N);

        if(N==0)
            break;

        int *in;
        in =(int*)malloc(sizeof(int)*N);

        for(i=0;i<N;i++){
            scanf("%d", &in[i]);
        }

        out=INFINITY;
        //printf("HI");
        max=pow(2, N);
        //printf("max=%d\n", max);

        //printf("N=%d\n", N);
        for(i=0;i<max;i++){
            temp=i;
            set1=0;
            set2=0;
            //printf("OH");
            for(j=0;j<N;j++){
                if(temp%2==1)
                    set1=set1+in[j];
                else
                    set2=set2+in[j];

                temp=temp/2;
            }
            ABS=abs(set1-set2);
            //printf("%d\n", ABS);
            if(ABS<out){
                out=ABS;
            }
        }
        printf("%d\n", out);
    }
    return 0;
}
