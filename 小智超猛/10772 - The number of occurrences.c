#include<stdio.h>
#include<string.h>
int main(void){
    char A[5];
    int n;
    int i, j, k;
    int s, x, ans=0;
    scanf("%s", A);
    scanf("%d", &n);
    for(i=0; i<n; i++){
        x=0;
        char B[10];
        scanf("%s", B);
        for(j=0; j<=strlen(B)-strlen(A); j++){
            for(k=0; k<strlen(A); k++){
                if(A[k]==B[j+k])
                    s=1;
                else{
                    s=0;
                    break;
                }
            }
            x+=s;
        }
        if(x>=ans)
            ans=x;
    }
    printf("%d", ans);
    return 0;
}
