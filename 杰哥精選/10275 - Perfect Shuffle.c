#include <stdio.h>

int main(){
    int n, i;
    while(scanf("%d", &n)!=EOF){
        int num = 0;
        i = 1;
        while(1){
            if(i <= n/2){
                i = i*2;
                num++;
            }
            if(i > n/2){
                i = i*2-n-1;
                num++;
            }
            if(i == 1)
                break;
        }
        printf("%d\n", num);
    }
    return 0;
}
