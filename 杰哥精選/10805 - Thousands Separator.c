#include <stdio.h>

int main(){
    int n, i, j, len, flag;
    char gar, buf;
    char in[100000];
    scanf("%d", &n);
    scanf("%c", &gar);
    for(i = 0; i < n; i++){
        len = 0;
        flag = 0;
        while(1){
            scanf("%c", &buf);
            if(buf == '\n'){
                if(flag == 1)
                    printf("NaN\n");
                else{
                    for(j = 0; j < len; j++){
                        printf("%c", in[j]);
                        if(j+1 < 3 && j+1 == len%3 && len > 3)
                            printf(",");
                        else if(j + 1 >= 3 && (j+1-(len%3))%3 == 0 && j+1 != len)
                            printf(",");
                    }
                    printf("\n");
                }
                break;
            }
            else if(buf < '0' || buf > '9'){
                flag = 1;
            }
            else{
                in[len] = buf;
                len++;
            }

        }
    }
    return 0;
}
