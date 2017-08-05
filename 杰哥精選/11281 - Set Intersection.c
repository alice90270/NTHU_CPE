#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
    if( *(int*)a < *(int*)b) return -1;
    if( *(int*)a == *(int*)b) return 0;
    if( *(int*)a > *(int*)b) return  1;
}

int G1[1000000];
int G2[1000000];
int out[1000000];

int main(){
    int n1, n2, i ,j, k;
    while(1){
        scanf("%d", &n1);
        if(n1 == 0)
            break;
        for(i = 0; i < n1; i++)
            scanf("%d", &G1[i]);
        scanf("%d", &n2);
        for(i = 0; i < n2; i++)
            scanf("%d", &G2[i]);
        qsort(G1, n1, sizeof(int), compare);
        qsort(G2, n2, sizeof(int), compare);
        j = 0;
        k = 0;
        for(i = 0; i < n1; i++){
            if(j == n2)
                break;
            if(G1[i] == G2[j]){
                out[k] = G1[i];
                k++;
                j++;
                continue;
            }
            if(G1[i] > G2[j]){
                i--;
                j++;
            }
        }
        if(k == 0)
            printf("empty\n");
        for(i = 0; i < k; i++){
            if(i == k-1)
                printf("%d\n", out[i]);
            else
                printf("%d ", out[i]);
        }
    }
    return 0;
}
