#include <stdio.h>
#include <string.h>


int main(){
    int n, i, j, l, k, len, max;
    char in[31][31];
    while(scanf("%d", &n)!=EOF){
        for(k = 0; k < n; k++){
            scanf("%s", in[k]);
        }
        /*for(k = 0; k < n; k++){
            printf("%s\n", in[k]);
        }*/
        max = 0;
        int flag;
        for(i = 0; i < n; i++){
            for(j = i+1; j < n; j++){
                flag = 0;
                for(len = 1;;len++){
                    //printf("%d\n", len);
                    for(l = 0; l < len; l++){
                        //printf("%c  %c\n", in[i][l], in[j][strlen(in[j])-len+l]);
                        if(in[i][l] != in[j][strlen(in[j])-len+l]){
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 0){
                        if(max < len)
                            max = len;
                        continue;
                    }
                    for(l = 0; l < len; l++){
                        //printf("%c  %c\n", in[i][strlen(in[i])-len+l], in[j][l]);
                        if(in[i][strlen(in[i])-len+l] != in[j][l]){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag == 1){
                        if(max < len)
                            max = len;
                    }
                    if(strlen(in[i]) < strlen(in[j]) && len >= strlen(in[i])){
                        break;
                    }
                    else if(strlen(in[i]) >= strlen(in[j]) && len >= strlen(in[j])){
                        break;
                    }
                }
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
