#include <stdio.h>
#include <string.h>
char sen[1001][51];
char temp[51];
int main(){
    int i,j,num,point = 0;
    char c;

    scanf("%d%c",&num,&c);
    while(num != 0){
        //input
        for(i=0;i<num;i++){
            scanf("%s[^\]n",sen[i]);
        }
        //swap
        for(i=0;i<num-1;i++){
            for(j=i+1;j<num;j++){
                if(strcmp(sen[i],sen[j])>0){
                    strcpy(temp, sen[i]);
                    strcpy(sen[i], sen[j]);
                    strcpy(sen[j], temp);
                }
            }
        }
        //print result
        for(i=0;i<num;i++){
            puts(sen[i]);
        }
        printf("\n");
        //next test case
        scanf("%d%c",&num,&c);
    }
}
