#include <stdio.h>

int main(){
    int n, i, j, k, r, c, que_now, que_put;
    char buf;
    scanf("%d", &n);
    for(k = 0; k < n; k++){
        scanf("%d %d", &r, &c);
        char map[r][c];
        int step[r][c];
        int que[r*c][2];
        scanf("%c", &buf);
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
            //up
            //printf("AAAAAA\n");
            if((y-1) >= 0 && map[x][y-1] == 'F'){
                printf("%d\n", step[x][y]+1);
                break;
            }
            //printf("BBBBBB\n");
            else if(((y-1) >= 0) && (map[x][y-1] != '#' && step[x][y-1] == -1)){
                step[x][y-1] = step[x][y]+1;
                que[que_put][0] = x;
                que[que_put][1] = y-1;
                que_put++;
            }
            //printf("CCCCCC\n");
            //down
            if((y+1) < c && map[x][y+1] == 'F'){
                printf("%d\n", step[x][y]+1);
                break;
            }
            //printf("DDDDDD\n");
            else if(((y+1) < c) && (map[x][y+1] != '#' && step[x][y+1] == -1)){
                step[x][y+1] = step[x][y]+1;
                que[que_put][0] = x;
                que[que_put][1] = y+1;
                que_put++;
            }
            //printf("EEEEEE\n");
            //left
            if((x-1) >= 0 && map[x-1][y] == 'F'){
                printf("%d\n", step[x][y]+1);
                break;
            }
            //printf("FFFFFF\n");
            else if(((x-1) >= 0) && (map[x-1][y] != '#' && step[x-1][y] == -1)){
                step[x-1][y] = step[x][y]+1;
                que[que_put][0] = x-1;
                que[que_put][1] = y;
                que_put++;
            }
            //printf("GGGGGG\n");
            //right
            if((x+1) < r && map[x+1][y] == 'F'){
                printf("%d\n", step[x][y]+1);
                break;
            }
            //printf("HHHHHHH\n");
            else if(((x+1) < r) && (map[x+1][y] != '#' && step[x+1][y] == -1)){
                step[x+1][y] = step[x][y]+1;
                que[que_put][0] = x+1;
                que[que_put][1] = y;
                que_put++;
            }
            //printf("IIIIIII\n");
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
