#include <stdio.h>

int main(){
    int n, i, j, k, r, c, que_now, que_put;
    char buf;
    scanf("%d", &n);
    for(k = 0; k < n; k++){
        scanf("%d %d%c", &r, &c, &buf);
        char map[r][c];
        int step[r][c];
        int que[r*c][2];
        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                scanf("%c", &map[i][j]);
                step[i][j] = -1;
                if(map[i][j] == 'S'){
                    que[0][0] = i;
                    que[0][1] = j;
                }
            }
            scanf("%c", &buf);
        }
        /*for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                printf("%c", map[i][j]);
            }
            printf("\n");
        }
        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                printf("%d", step[i][j]);
            }
            printf("\n");
        }*/
        //printf("%d %d", str[0], str[1]);
        //bfs
        que_now = 0;
        que_put = 1;
        step[que[que_now][0]][que[que_now][1]] = 0;
        while(1){
            //stop at end
            if(que_now >= que_put){
                printf("-1\n");
                break;
            }
            int x = que[que_now][0];
            int y = que[que_now][1];
        //////////////////up//////////////////
            //沒有超過邊界而且是終點
            if((y-1) >= 0 && map[x][y-1] == 'F'){
                printf("%d\n", step[x][y]+1);
                break;
            }
            //有路且還沒走過
            else if(((y-1) >= 0) && (map[x][y-1] != '#' && step[x][y-1] == -1)){
                step[x][y-1] = step[x][y]+1; //設定走過
                que[que_put][0] = x;
                que[que_put][1] = y-1;
                que_put++;
                //走道的地點存到QUE裡面
            }

        //////////////////down////////////////
            if((y+1) < c && map[x][y+1] == 'F'){
                printf("%d\n", step[x][y]+1);
                break;
            }
            else if(((y+1) < c) && (map[x][y+1] != '#' && step[x][y+1] == -1)){
                step[x][y+1] = step[x][y]+1;
                que[que_put][0] = x;
                que[que_put][1] = y+1;
                que_put++;
            }

        //////////////////left////////////////
            if((x-1) >= 0 && map[x-1][y] == 'F'){
                printf("%d\n", step[x][y]+1);
                break;
            }
            else if(((x-1) >= 0) && (map[x-1][y] != '#' && step[x-1][y] == -1)){
                step[x-1][y] = step[x][y]+1;
                que[que_put][0] = x-1;
                que[que_put][1] = y;
                que_put++;
            }

        //////////////////right////////////////
            if((x+1) < r && map[x+1][y] == 'F'){
                printf("%d\n", step[x][y]+1);
                break;
            }
            else if(((x+1) < r) && (map[x+1][y] != '#' && step[x+1][y] == -1)){
                step[x+1][y] = step[x][y]+1;
                que[que_put][0] = x+1;
                que[que_put][1] = y;
                que_put++;
            }
            /*for(i = 0; i < r; i++){
                for(j = 0; j < c; j++){
                    printf("%d", step[i][j]);
                }
                printf("\n");
            }*/
            //finish
            que_now++;
            //printf("%d\n", que_put);
            //printf("%d\n", que_now);
        }
    }
    return 0;
}
