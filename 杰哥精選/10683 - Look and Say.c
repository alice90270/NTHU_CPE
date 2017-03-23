#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int cases, c, i;
    char gar;
    scanf("%d", &cases);
    scanf("%c", &gar);
    for(c = 0; c < cases; c++){
        int times, len;
        char gar;
        char in[1000];
        len = 0;
        while(1){
            scanf("%c", &gar);
            if(gar == '\n')
                break;
            in[len] = gar;
            len++;
        }
        //printf("%d\n", len);
        scanf("%d", &times);
        scanf("%c", &gar);
        /*for(i = 0; i < len; i++){
            printf("%c", in[i]);
        }
        printf("\n");*/
        char *buf;
        buf = (char*)malloc(sizeof(char)*len*pow(2,times));
        char *out;
        out = (char*)malloc(sizeof(char)*len*pow(2,times));
        for(i = 0; i < len; i++)
            buf[i] = in[i];
        /*for(i = 0; i < len; i++)
            printf("%c ", buf[i]);
        printf("\n");*/
        int j, num, out_len;
        for(i = 0; i < times; i++){
            //printf("%d\n", len);
            num = 0;
            out_len = 0;
            char champion = buf[0];
            for(j = 0; j < len; j++){
                if(buf[j] == champion){
                    num++;
                    //printf("%c %d\n", buf[j], num);
                }
                else{
                    //printf("%c %c %d %d\n", buf[j-1], buf[j], num, len);
                    int digit = 0, tmp = num;
                    while(1){
                        digit++;
                        tmp = tmp/10;
                        if(tmp == 0)
                            break;
                    }
                    int k;
                    tmp = num;
                    //printf("%d %d %c %c %d\n", num, digit, champion, buf[j], j);
                    for(k = 0; k < digit; k++){
                        out[out_len++] = '0'+tmp/((int)pow(10,digit-k-1));
                        tmp = tmp%((int)pow(10,digit-k-1));
                    }
                    out[out_len++] = champion;
                    champion = buf[j];
                    j--;
                    num = 0;
                    //printf("%c %c %d\n", champion, buf[j], j);
                }
                if(j == len-1){
                    int digit = 0, tmp = num;
                    while(1){
                        digit++;
                        tmp = tmp/10;
                        if(tmp == 0)
                            break;
                    }
                    int k;
                    tmp = num;
                    //printf("%d %d\n", num, digit);
                    for(k = 0; k < digit; k++){
                        out[out_len++] = '0'+tmp/((int)pow(10,digit-k-1));
                        tmp = tmp%((int)pow(10,digit-k-1));
                    }
                    out[out_len++] = champion;
                }
            }
            len = out_len;
            for(j = 0; j < out_len; j++){
                buf[j] = out[j];
                //printf("%c", out[j]);
            }
            //printf("\n");
        }
        for(j = 0; j < out_len; j++){
                printf("%c", out[j]);
        }
        printf("\n");
    }
    return 0;
}
