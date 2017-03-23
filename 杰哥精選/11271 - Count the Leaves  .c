#include <stdio.h>
#include <stdlib.h>
int main(){
    int input, i, j, par, che, gar;
    while(scanf("%d", &input)!=EOF){
        if(input == 0)
            break;
        int* node;
        node = (int*)malloc(sizeof(int)*input);
        int* leaf;
        leaf = (int*)malloc(sizeof(int)*input);
        for(i = 0; i < input; i++){
            scanf("%d %d", &par, &che);
            node[i] = par;
            leaf[i] = che;
        }
        scanf("%d", &gar);
        int leafs = 0;
        for(i = 0; i < input; i++){
            for(j = 0; j < input; j++){
                if(j == input-1 && leaf[i]!=node[j])
                    leafs++;
                if(leaf[i]==node[j])
                    break;
            }
        }
        printf("%d\n", leafs);
    }
    return 0;
}
