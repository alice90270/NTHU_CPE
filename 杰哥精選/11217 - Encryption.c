#include <stdio.h>
#include <math.h>

int main(){
    int len, size, i, j, k, x, y, d, l;
    char n;
    char in[1001];
    len = 0;
    while(scanf("%c", &n)!=EOF){
        if(n != '\n'){
            in[len] = n;
            len++;
        }
        //encrytion
        else{
            size = sqrt(len);
            if(size*size < len)
                size++;
            /*for(i = 0; i < len; i++)
                printf("%c", in[i]);*/
            //printf("\n%d %d\n", len, size);
            int map[size][size];
            char out[size][size];
            for(i = 0; i < size; i++){
                for(j = 0; j < size; j++){
                    map[i][j] = -1;
                    out[i][j] = ' ';
                }
            }
            x = 0;
            y = 0;
            d = 0;
            for(i = 0; i < len; i++){
                map[x][y] = 0;
                out[x][y] = in[i];
                if(x+1 < size && map[x+1][y] == -1 && d == 0){//down & old
                    x++;
                    //printf("%d %d\n", x, y);
                }
                else if(y+1 < size && map[x][y+1] == -1 && d == 1){//right & old
                    y++;
                    //printf("%d %d\n", x, y);
                }
                else if(x-1 >= 0 && map[x-1][y] == -1 && d == 2){//up & old
                    x--;
                    //printf("%d %d\n", x, y);
                }
                else if(y-1 >= 0 && map[x][y-1] == -1 && d == 3){//left & old
                    y--;
                    //printf("%d %d\n", x, y);
                }
                else if(x+1 < size && map[x+1][y] == -1){//down & new
                    x++;
                    d = 0;
                    //printf("%d %d\n", x, y);
                }
                else if(y+1 < size && map[x][y+1] == -1){//right & new
                    y++;
                    d = 1;
                    //printf("%d %d\n", x, y);
                }
                else if(x-1 >= 0 && map[x-1][y] == -1){//up & new
                    x--;
                    d = 2;
                    //printf("%d %d\n", x, y);
                }
                else if(y-1 >= 0 && map[x][y-1] == -1){//left & new
                    y--;
                    d = 3;
                    //printf("%d %d\n", x, y);
                }
                /*for(k = 0; k < size; k++){
                    for(j = 0; j < size; j++){
                        printf("%d", map[k][j]);
                    }
                    printf("\n");
                }
                printf("\n");*/
            }
            y = 0;
            for(i = 0; i < size; i++){
                for(j = 0; j < size; j++){
                    if(out[i][j] != ' ')
                        y = i*size+j;
                }
            }
            //printf("%d\n", y);
            l = 0;
            for(i = 0; i < size; i++){
                for(j = 0; j < size; j++){
                    printf("%c", out[i][j]);
                    l++;
                    if(l > y)
                        break;
                }
                //printf("\n");
            }
            printf("\n");
            len = 0;
        }
    }
    return 0;
}
