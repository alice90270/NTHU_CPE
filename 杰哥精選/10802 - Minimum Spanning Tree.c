#include <stdio.h>
#include <stdlib.h>

typedef struct cc{
    int node1;
    int node2;
    int cost;
}edge;

int compare(const void * a, const void * b){
    edge* ap;
    edge* bp;
    ap = (edge*)a;
    bp = (edge*)b;
    if(ap->cost > bp->cost) return 1;
    else if(ap->cost == bp->cost) return 0;
    else return -1;
}

int main(){
    int n, l, i, j;
    scanf("%d", &n);
    for(l = 0; l < n; l++){
        long n_num, e_num;
        scanf("%d %d", &n_num, &e_num);
        edge *e;
        e = (edge*)malloc(sizeof(edge)*e_num);
        for(i = 0; i < e_num; i++){
            scanf("%d %d %d", &e[i].node1, &e[i].node2, &e[i].cost);
        }
        qsort(e, e_num, sizeof(edge), compare);
        /*for(i = 0; i < e_num; i++){
            printf("%d %d %d\n", e[i].node1, e[i].node2, e[i].cost);
        }*/
        int map[n_num];
        for(i = 0; i < n_num; i++){
            map[i] = i;
        }
        int cost = 0;
        int fin;
        for(j = 0; j < e_num; j++){
            //check
            fin = 0;
            /*for(i = 0; i < n_num; i++){
                printf("%d", map[i]);
            }
            printf("\n");*/
            for(i = 0; i < n_num; i++){
                if(map[i] != 0){
                    fin = 1;
                    break;
                }
            }
            if(fin == 0){
                break;
            }
            //check fin
            //printf("%d %d\n", e[j].node1-1, e[j].node2-1);
            //printf("%d\n", map[e[j].node1-1]);
            //printf("%d\n\n", map[e[j].node2-1]);
            if(map[e[j].node1-1] != map[e[j].node2-1]){
                if(map[e[j].node1-1] < map[e[j].node2-1]){
                    int buf = map[e[j].node2-1];
                    for(i = 0; i < n_num; i++){
                        if(map[i] == buf)
                            map[i] = map[e[j].node1-1];
                    }
                }
                else{
                    int buf = map[e[j].node1-1];
                    for(i = 0; i < n_num; i++){
                        if(map[i] == buf)
                            map[i] = map[e[j].node2-1];
                    }
                }
                cost = cost + e[j].cost;
            }
            //printf("%d\n", map[e[j].node1-1]);
            //printf("%d\n", map[e[j].node2-1]);
            //printf("%d\n", cost);
        }
        printf("%d\n", cost);
    }
    return 0;
}
