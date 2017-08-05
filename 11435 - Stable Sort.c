#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char name[30];
    int num;
    int order;
}st;
int cmp(const void*a,const void *b){
    st c = *(st*)a;
    st d = *(st*)b;

    if(c.num == d.num){
		return c.order-d.order;
	}
	else
        return c.num-d.num;
}
st input[1000000];

int main(){
    int n, i;
    while(scanf("%d",&n)!= EOF){
        for(i = 0; i < n; i++){
            scanf("%s %d",input[i].name,&input[i].num);
            input[i].order = i;
        }
        qsort(input,n,sizeof(input[0]),cmp);
        for(i = 0; i < n; i++){
            printf("%s %d\n",input[i].name,input[i].num);
		}
    }
    return 0;
}
