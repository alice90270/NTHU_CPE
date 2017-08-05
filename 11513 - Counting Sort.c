#include<stdio.h>
int main(){
    int N;
    while(scanf("%lld", &N)!=EOF){
        int value[10001];
        int max=0;
        int x, i;
        for(i=0;i<=10001;i++){
            value[i]=0;
        }
        while(N--){
            scanf("%d", &x);
            value[x]++;
            if(x>max)
                max=x;
        }
        for(i=0;i<10001;i++){
            if(value[i]!=0){
                if(i==max)
                    printf("%d %d\n", value[i], i);
                else
                    printf("%d %d ", value[i], i);
                //value[i]=0;
            }
        }
    }
    return 0;
}
