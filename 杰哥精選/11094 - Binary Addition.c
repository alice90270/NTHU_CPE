#include <stdio.h>

int main(){
    int n, i, j, len, tmp, carry;
    char gar;
    scanf("%d", &n);
    for(j = 0; j < n; j++){
        scanf("%d", &len);
        int a[len];
        int b[len];
        int out[len];
        scanf("%c", &gar);
        for(i = 0; i < len; i++){
             scanf("%c", &gar);
             if(gar == '0')
                a[i] = 0;
             else
                a[i] = 1;
        }
        scanf("%c", &gar);
        for(i = 0; i < len; i++){
            scanf("%c", &gar);
            if(gar == '0')
                b[i] = 0;
            else
                b[i] = 1;
        }
        scanf("%c", &gar);
        /*for(i = 0; i < len; i++){
            printf("%d", a[i]);
        }
        printf("\n");
        for(i = 0; i < len; i++){
            printf("%d", b[i]);
        }
        printf("\n");*/
        carry = 0;
        for(i = len-1; i >= 0; i--){
            tmp = carry + a[i] + b[i];
            if(tmp == 0){
                out[i] = 0;
                carry = 0;
            }
            else if(tmp == 1){
                out[i] = 1;
                carry = 0;
            }
            else if(tmp == 2){
                out[i] = 0;
                carry = 1;
            }
            else if(tmp == 3){
                out[i] = 1;
                carry = 1;
            }
        }
        for(i = 0; i < len; i++){
            printf("%d", out[i]);
        }
        printf("\n");
    }
    return 0;
}
