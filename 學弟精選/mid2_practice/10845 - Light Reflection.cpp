#include <stdio.h>
int corner(int h,int w,int sr, int sc,int de)
{
	if(sr==h&&sc==w) de=0;
	else if(sr==h&&sc==1) de=0;
	else if(sr==1&&sc==1) de=0;
	else if(sr==1&&sc==w) de=0;
	return de; 
 } 
 int main(void)
{
	int i=0, j=-1, k=1;
	int h, w, sr, sc, t; 
	int de=45;
	scanf("%d %d %d %d %d",&h,&w,&sr,&sc,&t);
	for(i=1;i<t;i++){
		if(de==45){
			
			do{
				sr--;
				sc++;
			}while(sr!=1&&sc!=w);
			if(sr==1){
				de=315;
			}else if(sc==w){
				de=135;
			}
		}
		else if(de==135){
			do{
				sr--;
				sc--;
			}while(sr!=1&&sc!=1);
			if(sr==1){
				de=225;
			}else if(sc==1){
				de=45;
			} 
		}
		else if(de==225){
			do{
				sr++;
				sc--;
			}while(sr!=h&&sc!=1);
			if(sr==h){
				de=135;
			}else if(sc==1){
				de=315;
			} 
		}
		else if(de==315){
			do{
				sr++;
				sc++;
			}while(sr!=h&&sc!=w);
			if(sr==h){
				de=45;
			}else if(sc==w){
				de=225;
			} 
		}
		de=corner(h,w,sr,sc,de);
		if(de==0) break; 
	}
	printf("(%d,%d)",sr,sc);
	return 0; 
 } 
/*·Ø©vver
int main(void)
{
	int H,W,T,row,col;
	int dr,dc; 
	scand("%d%d%d%d%d",&H,&W,&T,&row,&col);
	dr=-1;dc=1;
	while(T>1){
		row+=dr;
		col+=dc;
		if((row==1&&col==1)||
		   (row==1&&col==W)|| 
		   (row==H&&col==W)|| 
		   (row==H&&col==1)){
			break;
		}else if(row==1||row==H){
			dr=-dr;
			T--;
		}else if(col==1||col==W){
			dc=-dc;
			T--;
		}		 
	}
	printf("(%d,%d)",row,col);
	return 0; 
} 


*/ 

