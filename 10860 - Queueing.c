//10860 - Queueing
#include <stdio.h>
#include <string.h>
char nam[10000000][11];
int main(){
    int f,p;
    char str[6];
    queue = -1;
    front = 0;
    while(scanf("%s", str)!=EOF){
        if(str[1]=='u'){//PUSH
            queue++;
            scanf("%s", nam[queue]);
        }
        else if(str[1]=='o'){//POP
            if(front <= queue)
                front++;
        }
        else if(str[1]=='r'){//FRONT
            if(front <= queue)
                printf("%s\n", nam[front]);
            else
                printf("empty\n");
        }
    }
    return 0;
}
