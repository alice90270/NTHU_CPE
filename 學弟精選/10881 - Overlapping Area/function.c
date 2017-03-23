typedef struct
{
   int x;
   int y;
   int length;
   int width;
   int leftArea;
} Rect;
/*
3 3 4 4
0 0 5 4
*/

int a[10000][10000]={0};
void area(Rect *r1, Rect *r2)
{
    int i, j, overlap=0;
	r1->x +=5000;
    r1->y +=5000;
    r2->x +=5000;
    r2->y +=5000;
    r1->leftArea = 0;
    r2->leftArea = 0;
    for(i= r1->x;i< r1->x +  r1->width; i++){
        for(j=r1->y ;j< r1->y + r1->length;j++){
            a[i][j]=1;
            r1->leftArea++;
    }
    for(i= r2->x;i< r2->x +  r2->width; i++){
        for(j=r2->y ;j< r2->y + r2->length;j++){
            if(a[i][j]==0){
				a[i][j]=1;
				r2->leftArea++;
			}
            else if (a[i][j]==1){
				overlap++;
				a[i][j]=0;
			}
        }
    }
    r1->leftArea -=overlap;
}
/*int a[10000][10000]={0};
void area(Rect *r1, Rect *r2)
{
    int i, j;
    r1->x +=5000;
    r1->y +=5000;
    r2->x +=5000;
    r2->y +=5000;
    r1->leftArea = 0;
    r2->leftArea = 0;
    for(i= r1->x;i< r1->x +  r1->width; i++){
        for(j=r1->y ;j< r1->y + r1->length;j++){
            a[i][j]=1;
        }
    }
    for(i= r2->x;i< r2->x +  r2->width; i++){
        for(j=r2->y ;j< r2->y + r2->length;j++){
            if(a[i][j]==0) a[i][j]=1;
            else if (a[i][j]==1) a[i][j]=0;
        }
    }
    for(i= r1->x;i< r1->x +  r1->width; i++){
        for(j=r1->y ;j< r1->y + r1->length;j++){
            if(a[i][j]==1) r1->leftArea++;
        }
    }
    for(i= r2->x ;  i< r2->x +  r2->width; i++){
        for(j=r2->y ;j< r2->y + r2->length;j++){
            if(a[i][j]==1) r2->leftArea++;
        }
    }

}


/*void area(Rect *r1, Rect *r2)
{
    int n;
    if(r1->x>r2->x){
        n=((*r2).x+(*r2).width-(*r1).x)*((*r2).y+(*r2).length-(*r1).y);
    }else if(r1->x<r2->x){
        n=((*r1).x+(*r1).width-(*r2).x)*((*r1).y+(*r1).length-(*r2).y);
    }
    r1->leftArea = (*r1).length * (*r1).width-n;
    r2->leftArea = (*r2).length * (*r2).width-n;
}
*/
