typedef struct
{
   int ID;
   int Chinese, English, math, science;
   int total;
} Grade;
void sortGrade(Grade *gList, int n)
{
    int i, j;
    Grade tmp;
    for(i=0;i<n;i++){
        gList[i].total = gList[i].Chinese + gList[i].English + gList[i].math + gList[i].science;
    }
    for(i=n;i>0;i--){
        for(j=1;j<i;j++){
            if(gList[j].total>gList[j-1].total){
                tmp = gList[j-1];
                gList[j-1]=gList[j];
                gList[j]=tmp;
            }
        }
    }
    for(i=n;i>0;i--){
        for(j=1;j<i;j++){
            if(gList[j].math>gList[j-1].math&&gList[j].total==gList[j-1].total){
                tmp = gList[j-1];
                gList[j-1]=gList[j];
                gList[j]=tmp;
            }
        }
    }
    for(i=n;i>0;i--){
        for(j=1;j<i;j++){
            if(gList[j].English>gList[j-1].English&&gList[j].total==gList[j-1].total){
                tmp = gList[j-1];
                gList[j-1]=gList[j];
                gList[j]=tmp;
            }
        }
    }
    for(i=n;i>0;i--){
        for(j=1;j<i;j++){
            if(gList[j].Chinese>gList[j-1].Chinese&&gList[j].total==gList[j-1].total){
                tmp = gList[j-1];
                gList[j-1]=gList[j];
                gList[j]=tmp;
            }
        }
    }
    for(i=n;i>0;i--){
        for(j=1;j<i;j++){
            if(gList[j].Chinese==gList[j-1].Chinese&&gList[j].total==gList[j-1].total&&
               gList[j].English==gList[j-1].English&&gList[j].math==gList[j-1].math&&
               gList[j].science==gList[j-1].science&&gList[j].ID<gList[j-1].ID){
                tmp = gList[j-1];
                gList[j-1]=gList[j];
                gList[j]=tmp;
            }
        }
    }



}
