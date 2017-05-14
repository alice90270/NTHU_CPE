#include<stdio.h>

int main(){
    char input[10000]={};

    while(gets(input)){
        int len=0;
        int n=1;
        int i, j, k;
        len=strlen(input);
        //printf("len=%d\n", len);

        while(len>(n*n)){
            n++;
            //printf("n=%d\n", n);
        }
        char table[50][50];
        int tableTraced[50][50];

        // initial
        for(i=0;i<=n+1;i++){
            for(j=0;j<=n+1;j++){
                table[i][j]=' ';
                //printf("[%c]", table[i][j]);
                if(i==0||j==0||i==n+1||j==n+1)
                    tableTraced[i][j]=1;
                else
                    tableTraced[i][j]=0;
            }
            //printf("\n");
        }

        int index=0;
        int row=1;
        int col=1;
        int down=0;
        int right=1;
        int up=2;
        int left=3;
        int now=0;
        //¤U ¥k ¤W ¥ª
/*        for(i=0;i<=n+1;i++){
            for(j=0;j<=n+1;j++){
                    printf("[%d]", tableTraced[i][j]);

            }
            printf("\n");
     }  */
        while(index<len){
            //printf("%c\n", input[index]);
            table[row][col]=input[index];
            tableTraced[row][col]=1;
            index++;

            if(now%4==down){
                if(tableTraced[row+1][col]!=0){
                    col++; // move right
                    now++;
                }
                else row++;//down
            }
            else if(now%4==right){
                if(tableTraced[row][col+1]!=0){
                    row--; // move up
                    now++;
                }
                else col++;
            }
            else if(now%4==up){
                if(tableTraced[row-1][col]!=0){
                    col--; // move left
                    now++;
                }
                else row--;
            }
            else if(now%4==left){
                if(tableTraced[row][col-1]!=0){
                    row++; // move down
                    now++;
                }
                else col--;
            }

        }

        int stop=0;
 /*       for(j=n;j>=1;j--){
            if(table[n][j]==' ')
                stop=j;
            else
                break;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i==n&& j==stop){
                    break;
                }
                printf("[%c]", table[i][j]);
            }
            printf("\n");
        }
*/

        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                if(table[i][j] != ' ')
                    stop = (i-1)*n+(j-1);
            }
        }

        int len_index = 0;
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                printf("%c", table[i][j]);
                len_index++;
                if(len_index > stop)
                    break;
            }
            //printf("\n");
        }
        printf("\n");

    }

    return 0;
}
