#include <cstdio>
#include <cstdlib>

int adj[1001][1001] ,step[1001],n,m;

int dfs(int root){
    step[root] = 0;
    int i ,result = 0;
    for(i = 1 ; i <= n ;i++ ){
        if(adj[root][i]){
            if(step[i] == -1){
                result = dfs(i) ;
            }
            else if(step[i] == 0){
                result = 1 ;
            }
        }
    }
    step[root] = 1 ;
    return result ;

}
int main(){
    int i,j,p,q;
    result = 0 ;
    while(scanf("%d %d",&n,&m)!=EOF){
        //initial
        for(i = 0 ; i < 1001;i++){
            step[i] = -1 ;
            for(j=0;j<1001;j++){
                adj[i][j] = 0 ;
            }
        }
        //input
         for(i=0;i<m;i++){
            scanf("%d %d",&p,&q) ;
            adj[p][q] = 1 ;
         }
         result = 0 ;

         for(i = 1 ; i <=n ; i++){
            if(step[i] == -1 ){
                 result = dfs(i) ;
                 if(result)
                    break ;
            }
        }
        if(result)printf("YES\n") ;
        else printf("NO\n") ;
    }
    return 0  ;

}
