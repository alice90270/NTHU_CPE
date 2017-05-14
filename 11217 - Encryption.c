#include<stdio.h>

int main(){
    char input[10000];
    while(gets(input)){
        int len=0;
        int n=1;
        int i, j, k;
        len=strlen(input);
        printf("len=%d\n", len);

        while(len>(n*n)){
            n++;
            printf("n=%d\n", n);
        }
        char table[n][n];
        char tableTraced[n+1][n+1];

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                tableTraced[i][j]=0;
            }
        }
        int index=0;
        int row=0;
        int col=0;
        char now="down";
        //¤U ¥k ¤W ¥ª
        while(index<len){
            if(now="down"){
                printf(input[index]);
                table[row][col]=input[index];
                tableTraced[row][col]=1;
                index++;
                if(row==n-1 || tableTraced[row+1][col]!=0){
                    col++; // move right
                    now="right";
                }
                else row++;      //down
            }
            else if(now="right"){
                printf(input[index]);
                table[row][col]=input[index];
                tableTraced[row][col]=1;
                index++;
                if(col==n-1 || tableTraced[row][col+1]!=0){
                    row--; // move up
                    now="up";
                }
                else col++;
            }
            else if(now="up"){
                printf(input[index]);
                table[row][col]=input[index];
                tableTraced[row][col]=1;
                index++;
                if(row==0 || tableTraced[row-1][col]!=0){
                    col--; // move left
                    now="left";
                }
                else row--;
            }
            else if(now="left"){
                printf(input[index]);
                table[row][col]=input[index];
                tableTraced[row][col]=1;
                index++;
                if(col==0 || tableTraced[row][col-1]!=0){
                    row++; // move down
                    now="down";
                }
                else col--;
            }

        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("[%c]", table[i][j]);
            }
            printf("\n");
        }




    }

    return 0;
}
