#include <stdio.h>
#include <stdlib.h>

typedef struct cc{
    int p;
    int ch;
}tree;
tree t[2000001];
void dfs(int root, int n){
    printf("%d", root);
    int i;
    for(i = 0; i < n; i++){
        if(t[i].p == root){
            printf(" ");
            dfs(t[i].ch, n);
        }
    }
}

int compare(const void * a, const void * b){
    tree *an;
    tree *bn;
    an = (tree *)a;
    bn = (tree *)b;
    if(an->ch < bn->ch) return -1;
    else if(an->ch == bn->ch) return 0;
    else return 1;
}

int main(){
    int n, i, num, root;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;
        for(i = 0; i < n; i++){
            scanf("%d %d", &t[i].p, &t[i].ch);
        }
        scanf("%d", &root);
        /*for(i = 0; i < n; i++){
            printf("%d %d\n", t[i].p, t[i].ch);
        }
        printf("%d\n", root);*/
        qsort(t, n, sizeof(tree), compare);
        /*for(i = 0; i < n; i++){
            printf("%d %d\n", t[i].p, t[i].ch);
        }*/
        dfs(root, n);
        printf("\n");
    }
    return 0;
}
