//10849 ·Ø©vver.
#include <stdio.h>
#include <stdlib.h>

char map[55][55]; 
void fill(int M, int N){
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			map[i][j]='-';
		}
	} 
} 
void show(int M,int N)
{
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%c",map[i][j]);
		}
		printf("\n");
	} 
 } 
void triangle(int ang,int sz,int row,int col)
{
	int i,j,k;
	if(ang==0){
		for(i=row,k=0;k<sz;k++, i--){
			for(j=col-k;j<=col+k;j++){
				map[i][j]='T';
			}
		} 
	}else if(ang==180){
		for(i=row,k=0;k<sz;k++, i++){
			for(j=col-k;j<=col+k;j++){
				map[i][j]='T';
			}
		} 
	}else if(ang==90){
		for(j=col,k=0;k<sz;k++, j++){
			for(i=row-k;i<=row+k;i++){
				map[i][j]='T';
			}
		} 
	} else if(ang==270){
		for(j=col,k=0;k<sz;k++, j--){
			for(i=row-k;i<=row+k;i++){
				map[i][j]='T';
			}
		} 
	} 
	map[row][col]='t';
	
 } 
 void square(int ang, int sz, int row, int col)
 {
 	int  r0, c0, i, j;
	if(ang==0){
	 	r0 = row-sz+1;
		c0 = col-sz+1; 
	}else if(ang==90){
	 	r0 = row-sz+1;
		c0 = col; 
	} else if(ang==180){
	 	r0 = row;
		c0 = col; 
	}else if(ang==270){
	 	r0 = row;
		c0 = col-sz+1; 
	}
	for(i=0;i<sz;i++){
		for(j=0;j<sz;j++){
			map[r0+i][c0+j]='Q';
		}
	}
	map[row][col]='q';
	  
  } 
int main(void)
{
	int M, N;
	int ang,sz,row,col;
	char ch; 
	scanf("%d %d", &M, &N);
	fill(M,N);
	scanf(" %c",&ch);
	while(ch!='x'){
		scanf("%d %d %d %d", &ang, &sz, &row, &col);
		if(ch=='T'){
			triangle(ang,sz,row,col);
		}else if(ch=='Q'){
			square(ang,sz,row,col);
		}
		printf("%c %d %d %d %d",ch,ang,sz,row,col);
		scanf(" %c", &ch);
	} 
	show(M,N); 
	system("pause"); 
	return 0; 
 } 
