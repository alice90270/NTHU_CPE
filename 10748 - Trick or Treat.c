#include<stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        int num, i;
        scanf("%d", &num);
        int A[num+1];
        int buff[num+1];

        for(i=1;i<=num;i++){
            scanf("%d", &A[i]);
        }
        while(1){
            int allthesame=1;
            // end condition
            for(i=2;i<=num;i++){
                if(A[i]!=A[1]){
                    allthesame=0;
                    break;
                }
            }
            if(allthesame==1){
                break;
            }
            // everyone-gets-even-candies
            for(i=1;i<=num;i++){
                if(A[i]%2==1)
                    A[i]++;
            }
            // everyone-passes-half
            int temp;
            for(i=1;i<=num;i++){
                if(i==1)
                    temp=A[i]/2;
                if(i==num)
                    A[i]=A[i]/2+temp;
                else
                    A[i]=A[i]/2+A[i+1]/2;
            }
        }
        printf("%d\n", A[1]);
    }
    return 0;
}
