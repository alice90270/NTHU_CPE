#include <stdio.h>
int count[11];
int output[15];
void dfs(int num, int step, int fro){
    if(step == num){
        int i;
        for(i = 0; i < num; i++){
            printf("%c", output[i]+'A');
        }
        printf("\n");
        return;
    }
    else{
        int i;
        for(i = fro; i < 11; i++){
            if(count[i]!=0){
                output[step]= i;
                count[i]--;
                dfs(num, step+1, i);
                count[i]++;
            }
        }
    }
};

int main(){
    int n, i, j, num;
    char c;
    scanf("%d", &n);
    for(j = 0; j < n; j++){
        //clean
        for(i = 0; i < 11; i++)
            count[i] = 0;
        scanf("%c", &c);
        while(1){
            scanf("%c", &c);
            if(c==' ')
                break;
            int buf = c-65;
            count[buf]++;
        }
        scanf("%d", &num);
        dfs(num, 0, 0);
        printf("\n");
    }
    return 0;
}
