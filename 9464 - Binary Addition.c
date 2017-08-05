#include<stdio.h>

int main(){
    int t, n, i, carry, sum;
    int A, B, a[10001], b[10001], c[10001];
    scanf("%d", &t);
        while(t--){
            scanf("%d", &n);
            for(i=0;i<n;i++){
                scanf(" %1d", &a[i]);
            }
            for(i=0;i<n;i++){
                scanf(" %1d", &b[i]);
            }

            carry=0;
            for(i=n-1;i>=0;i--){
                sum=a[i]+b[i]+carry;
                if(sum>=2)
                    carry=1;
                else
                    carry=0;
                c[i]=sum%2;
            }

            for(i=0;i<n;i++){
                printf("%1d", c[i]);
                c[i]=0;
            }
            printf("\n");
        }
return 0;
}

