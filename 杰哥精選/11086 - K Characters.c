#include <stdio.h>
int count[52];
int out[21];

void dfs(int len, int step, int fro){
    int i;
    if(step == len){
        for(i = 0; i < len; i++){
            if(out[i] < 26)
                printf("%c", out[i]+'A');
            else
                printf("%c", out[i]-26+'a');
        }
        printf("\n");
        return;
    }
    else{
        for(i = fro; i < 52; i++){
            if(count[i] != 0){
                out[step] = i;
                count[i]--;
                dfs(len, step+1, i);
                count[i]++;
            }
        }
    }
};

int main(){
    int n, w, len, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < 52; j++)
            count[j] = 0;
        scanf("%d %d", &w, &len);
        for(j = 0; j < w; j++)
            count[j] = 1;
        dfs(len, 0, 0);
        printf("\n");
    }
    return 0;
}
