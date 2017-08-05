#include<stdio.h>

int main(){
    int N;

    while(scanf("%d", &N)!=EOF){

        int index, top, current, flag, i;
        int input[N];
        int stack[N];

        for(i=0;i<N;i++){
            scanf("%d", &input[i]);
        }
        top=0;
        current=1;
        index=0;

        while(1){
            if(current>N){//over the input array
                flag=0;
                break;
            }
            if(index>=N && stack[top-1]!=current){//stack top != current count
                flag=1;
                break;
            }

            //POP
            if(stack[top-1]==current && top!=0){ //not empty stack
                current++;
                top--;
            }
            //OUT
            else if(input[index]==current){
                    current++;
                    index++;
            }
            //PUSH
            else{
                stack[top]=input[index];
                index++;
                top++;
            }
        }
        if(flag==0) printf("YES\n");
        else        printf("NO\n");
    }
    return 0;
}
