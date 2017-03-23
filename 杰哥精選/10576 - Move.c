#include <stdio.h>
#include <string.h>

typedef struct cc{
    int front;
    int next;
}node;

int main(){
    int n, a, b, i, head;
    char gar;
    char str[6];
    scanf("%d", &n);
    scanf("%c", &gar);
    node *list;
    list = (node*)malloc(sizeof(node)*(n+1));
    head = 1;
    for(i = 1; i <= n; i++){
        list[i].front = i-1;
        list[i].next = i+1;
    }
    while(1){
        int buf;
        buf = head;
        /*for(i = 0; i < n; i++){
            printf("%d %d %d\n", buf, list[buf].front, list[buf].next);
            buf = list[buf].next;
        }*/
        //printf("wait\n");
        scanf("%s", str);
        //printf("%s ", str);
        if(strcmp(str, "Exit")==0)
            break;
        else{
            scanf("%d %d", &a, &b);
            //printf("a = %d  b = %d\n", a, b);
            scanf("%c", &gar);
            list[head].front = list[b].front;
            list[list[b].front].next = head;
            head = list[a].next;
            list[a].next = b;
            list[b].front = a;
        }
    }
    for(i = 0; i < n; i++){
        printf("%d", head);
        head = list[head].next;
        if(i < n-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
