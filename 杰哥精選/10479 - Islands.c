#include <stdio.h>

int main(){
    int m, n, i, j;
    char gar;
    while(1){
        scanf("%d %d", &m, &n);
        scanf("%c", &gar);
        int max = 0;
        if(m == 0 && n == 0)
            break;
        char map[m][n];
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                scanf("%c", &map[i][j]);
            }
            scanf("%c", &gar);
        }
        int step[m][n];
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                step[i][j] = -1;
            }
        }
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                //dfs
                if(map[i][j] == '*' || step[i][j] == 0)
                    continue;
                int qu[m*n][2];
                qu[0][0] = i;
                qu[0][1] = j;
                step[i][j] = 0;
                int next = 0, put = 1;
                int size = 1;
                while(1){
                    if(next >= put)
                        break;
                    int x = qu[next][0];
                    int y = qu[next][1];
                    //left
                    //printf("%d %d %d\n", next, x, y);
                    if(y-1 >= 0 && map[x][y-1] == '#' && step[x][y-1] == -1){
                        size++;
                        step[x][y-1] = 0;
                        qu[put][0] = x;
                        qu[put][1] = y-1;
                        put++;
                        //printf("left %d %d %d\n", size, qu[put-1][0], qu[put-1][1]);
                    }
                    //right
                    if(y+1 < n && map[x][y+1] == '#' && step[x][y+1] == -1){
                        size++;
                        step[x][y+1] = 0;
                        qu[put][0] = x;
                        qu[put][1] = y+1;
                        put++;
                        //printf("right %d %d %d\n", size, qu[put-1][0], qu[put-1][1]);
                    }
                    //down
                    if(x+1 < m && map[x+1][y] == '#' && step[x+1][y] == -1){
                        size++;
                        step[x+1][y] = 0;
                        qu[put][0] = x+1;
                        qu[put][1] = y;
                        put++;
                        //printf("down %d %d %d\n", size, qu[put-1][0], qu[put-1][1]);
                    }
                    //up
                    if(x-1 >= 0 && map[x-1][y] == '#' && step[x-1][y] == -1){
                        size++;
                        step[x-1][y] = 0;
                        qu[put][0] = x-1;
                        qu[put][1] = y;
                        put++;
                        //printf("up %d %d %d\n", size, qu[put-1][0], qu[put-1][1]);
                    }
                    next++;
                }
                if(size > max)
                    max = size;
            }
        }
        printf("%d\n", max);
        /*for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("%c", map[i][j]);
            }
            printf("\n");
        }*/
    }
    return 0;
}
