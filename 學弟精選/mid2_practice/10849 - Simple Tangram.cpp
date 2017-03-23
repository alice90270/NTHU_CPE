#include <stdio.h>
char board[60][60]; 
void square(int ang, int t, int row, int col)
{
	int i, j;
	int r=row, c=col, sz; 
	if(ang==0){
		for(i=row-t+1;i<=row;i++){
			for(j=col-t+1;j<=col;j++){
				board[i][j]='Q';
			}
		}	
	}else if(ang==90){
		for(i=row-t+1;i<=row;i++){
			for(j=col;j<col+t;j++){
				board[i][j]='Q';
			}
		}
	}else if(ang==180){
		for(i=row;i<row+t;i++){
			for(j=col;j<col+t;j++){
				board[i][j]='Q';
			}
		}
	}else if(ang==270){
		for(i=row;i<row+t;i++){
			for(j=col-t+1;j<=col;j++){
				board[i][j]='Q';
			}
		}
	}   

	board[row][col]='q';		
 } 
void triangle(int ang, int t, int row, int col)
{
	int i, j, k;
	if(ang==0){
		for(i=row,k=0;k<t;i--,k++){
			for(j=col-k;j<=col+k;j++){
				board[i][j]='T';
			}
		}
	}else if(ang==90){
		for(j=col,k=0;k<t;j++,k++){
			for(i=row-k;i<=row+k;i++){
				board[i][j]='T';
			}
		}
	}else if(ang==180){
		for(i=row,k=0;k<t;i++,k++){
			for(j=col-k;j<=col+k;j++){
				board[i][j]='T';
			}
		}
	}else if(ang==270){
		for(j=col,k=0;k<t;j--,k++){
			for(i=row-k;i<=row+k;i++){
				board[i][j]='T';
			}
		}
	}  
	board[row][col]='t';
 } 
int main(void)
{
//	freopen("test.txt","r",stdin);
	int h, w;
	char type; 
	int ang, t, row, col;
	int i, j; 
	scanf("%d %d",&h, &w);
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			board[i][j] = '-'; 
		}
	}
	scanf(" %c", &type);	
	while(type!='x'){
		scanf("%d %d %d %d", &ang, &t, &row, &col);
		if(type=='T'){
			triangle(ang,t,row,col);
		} 
		else if(type=='Q'){
			square(ang,t,row,col);
		} 
		scanf(" %c", &type);				
	}  
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			printf("%c",board[i][j]); 
		}
		printf("\n");
	}
	return 0;  
	
 } 
