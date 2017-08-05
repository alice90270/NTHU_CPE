#include <stdio.h>
#include <string.h>
char name[10000000][11];
int main(){
    int first,last;
    char str[6];
    last = -1;
    first = 0;
    while(scanf("%s", str)!=EOF){
        if(str[1]=='u'){
            last++;
            scanf("%s", name[last]);
        }
        else if(str[1]=='o'){
            if(first <= last)
                first++;
        }
        else if(str[1]=='r'){
            if(first <= last)
                printf("%s\n", name[first]);
            else
                printf("empty\n");
        }
    }
    return 0;
}
