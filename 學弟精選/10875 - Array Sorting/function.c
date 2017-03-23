#define COLUMN 5
void sortArray(int R, int (*array)[COLUMN])
{
    int i, j, k, tmp;
    for(i=0;i<5;i++){
        for(j=R;j>0;j--){
            for(k=1;k<j;k++){
                if ((*array)[i+COLUMN*(k-1)] > (*array)[i+COLUMN*k]) {
                    tmp=(*array)[i+COLUMN*k];
                    (*array)[i+COLUMN*k]=(*array)[i+COLUMN*(k-1)];
                    (*array)[i+COLUMN*(k-1)]=tmp;
                }
            }
        }
    }
}
