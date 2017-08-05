#include <stdio.h>

int main(){
    int testcase, i, j, k, row, col, now, put, path;
    char buf;
    scanf("%d", &testcase);
    for(k = 0; k < testcase; k++){
        scanf("%d %d%c", &row, &col, &buf);
        char map[row][col];
        int step[row][col];
        int queX[row*col];
		int queY[row*col];
		// INPUT //
        for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                scanf("%c", &map[i][j]);
                step[i][j] = -1;			//設定全部沒走過
                if(map[i][j] == 'S'){		//起點位置存入Queue
                    queX[0]= i;
                    queY[0]= j;
                }
            }
            scanf("%c", &buf);				//換行要記得吃
        }

        now = 0;
        put = 1;
        step[queX[now]][queY[now]] = 0;

        while(1){
        /******* nothing in the queue *********/
            if(now >= put){
                printf("-1\n");
                break;
            }

			//把Queue現在存的位置拿出來(x,y)
            int x = queX[now];
            int y = queY[now];

        //////////////////左//////////////////
			if(y-1>=0){
				if(map[x][y-1] == 'F'){					// 終點
					printf("%d\n", step[x][y]+1);
					break;
				} 										// 有路且還沒走過
				else if(map[x][y-1] != '#' && step[x][y-1] == -1){
					step[x][y-1] = step[x][y]+1; 			//設定下一個位置是現在的step+1
					queX[put] = x;						//設定que[put]=左
					queY[put] = y-1;
					put++;								//下一個位置存到que_put裡面
				}
			}

        //////////////////右////////////////
			if(y+1<col){
				if(map[x][y+1] == 'F'){
					printf("%d\n", step[x][y]+1);
					break;
				}
				else if(map[x][y+1] != '#' && step[x][y+1] == -1){
					step[x][y+1] = step[x][y]+1;
					queX[put] = x;
					queY[put] = y+1;
					put++;
				}
			}

        //////////////////上////////////////
			if(x-1>=0){
				if(map[x-1][y] == 'F'){
					printf("%d\n", step[x][y]+1);
					break;
				}
				else if(map[x-1][y] != '#' && step[x-1][y] == -1){
					step[x-1][y] = step[x][y]+1;
					queX[put] = x-1;
					queY[put] = y;
					put++;
				}
			}
        //////////////////下////////////////
			if(x+1<row){
				if(map[x+1][y] == 'F'){
					printf("%d\n", step[x][y]+1);
					break;
				}
				else if(map[x+1][y] != '#' && step[x+1][y] == -1){
					step[x+1][y] = step[x][y]+1;
					queX[put] = x+1;
					queY[put] = y;
					put++;
				}
			}
            now++;
        }
    }
    return 0;
}
