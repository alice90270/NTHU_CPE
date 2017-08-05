#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp( const void *a, const void *b){
    return *(int*)a - *(int*)b;
}


int main(){
    int array[10000], sorted_array[100000], , index, len;
    char in;
    int value=0;
    while(scanf("%c", &in)!=EOF){
    //while(1){
        //scanf(" %c", &in);
        //if(in=='Z')   break;
        if(in>='a'&& in<='z'){
            //printf("%c=>%d\n", in, in);
            value= in-'a';
            //printf("value=%d\n", value);
            array[value]++;
        }
        else    continue;
    }
        int i, j;
        index=0;
        for(i=1;i<=26;i++){
            if(array[i]!=0){
                sorted_array[index]=array[i]*i;
                array[i]=array[i]*i;
                index++;
            }
        }
        qsort(sorted_array, index, sizeof(int), cmp);

        for(i=index-1;i>=0;i--){
            for(j=1;j<=26;j++){
                if(array[j]==sorted_array[i]){
                    printf("%c %d\n", j+'a', sorted_array[i]);
                    array[j]=0;
                    break;
                }
            }
        }

    return 0;
}
