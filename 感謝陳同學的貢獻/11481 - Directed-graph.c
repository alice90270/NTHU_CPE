#include<stdio.h>
#include<string.h>
#define INF 1000000

int g[1005][1005];
int v[1005];
int ans=0;

void DFS(int index, int node){
    int i, j;

    v[index]=1;
    for(i=1; i<=node; i++){
        if(g[index][i]==1){
            if(v[i]==0) DFS(i, node);
            else if(v[i]==1) ans=1;
        }
    }
    v[index]=2;
}

void DFS_v(int node){
    int i, j;
    for(i=1; i<=node; i++){
        if(v[i]==0) DFS(i, node);
    }
}

void init(int node){
    int i, j;
    for(i=1; i<=node; i++){
        v[i]=0;
        for(j=1; j<=node; j++) g[i][j]=INF;
    }
    ans=0;
}

int main(){
    int i, j, k, node, edge;
    while(scanf("%d%d", &node, &edge)!=EOF){
        init(node);
        for(i=0; i<edge; i++){
            int a, b;
            scanf("%d%d", &a, &b);
            g[a][b]=1;
        }
        DFS_v(node);

        if(ans==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
