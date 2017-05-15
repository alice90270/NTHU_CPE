#include<stdio.h>
#include<string.h>

int main(){
    int array[10000];
    char in;
    int value=0;
    while(scanf("%c", &in)!=EOF){

        if(in>='a'&& in<='z'){
            //printf("%c=>%d\n", in, in);
            value= in-'a'+1;
            //printf("value=%d\n", value);
            array[value]++;
        }
        else    continue;
    }
        int i;
        for(i=1;i<=26;i++){
            printf("%c %d\n", i+'a'-1, array[i]*i);
        }
/*
*/    return 0;
}
