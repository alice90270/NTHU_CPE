#include <stdio.h>
#include <string.h>
char nam[10000000][11];
int main(){
    int f,p;
    char str[6];
    p = -1;
    f = 0;
    while(scanf("%s", str)!=EOF){
        if(strcmp(str,"Push")==0){
            p++;
            scanf("%s", nam[p]);
        }
        else if(strcmp(str, "Pop")==0){
            if(f <= p)
                f++;
        }
        else if(strcmp(str, "Front")==0){
            if(f <= p)
                printf("%s\n", nam[f]);
            else
                printf("empty\n");
        }
    }
    return 0;
}
