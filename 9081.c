#include<stdio.h>
int main(){
    int count[10001];
    long long int N=0;
    int intput, i;
    while(scanf("%lld", &N)!=EOF){
        for(i=0;i<N;i++){
            scanf("%d", &input);
            count[input]++;
        }
        order=1;
        for(i=0;i<10001;i++){
            if(count[i]!=0)
                printf("%d %d", count[i], i);
            if(order==N)
                printf("\n");
            else
                printf(" ");
            order++;
        }
    }

return 0;
}
