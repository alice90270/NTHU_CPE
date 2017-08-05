#include<stdio.h>
void printstack(int array[], int box){
    int i;
    for(i=0;i<=box;i++){
        printf("[%d]%d ", i, array[i]);
}
printf("\n");
}

int main(){
    int M;
    while(scanf("%d", &M)!=EOF){
        int stack[10001];
        int N, box, findposition, position, temp, i;
        box=0;
        scanf("%d", &N);
        //initial
        stack[0]=0;
        for(i=1;i<10001;i++){
            stack[i]=M;
        }
       //input
        if(N!=0){
            box++;
            stack[box]-=N;
            while(1){
                //second input
                scanf("%d", &N);
                if(N==0)
                    break;
                else{
                    // not enough space
                    if(N>stack[box]){
                        //find position in stack
                        for(i=1;i<=box;i++){
                            if(stack[i]>N){
                                findposition=1;
                                position=i;
                                break;
                            }
                            else{
                                findposition=0;
                            }
                        }
                        //if(no space in stack)
                        if(findposition==0){
                             box++;
                             stack[box]-=N;
                             //swap()
                            for(i=box;i>1;i--){
                                if(stack[i]<stack[i-1]){
                                    temp=stack[i];
                                    stack[i]=stack[i-1];
                                    stack[i-1]=temp;
                                }
                            }
                        }
                        else{
                            //find space in stack
                            stack[position]-N;
                            //swap()
                            for(i=position;i>1;i--){
                                if(stack[i]<stack[i-1]){
                                    temp=stack[i];
                                    stack[i]=stack[i-1];
                                    stack[i-1]=temp;
                                }
                            }
                        }
                    }
                    else{
                    //enough space
                    stack[box]-=N;
                    //swap()
                    for(i=box;i>1;i--){
                        if(stack[i]<stack[i-1]){
                            temp=stack[i];
                            stack[i]=stack[i-1];
                            stack[i-1]=temp;
                        }
                    }
                    }
                }
            }
        }
        printf("%d\n", box);
    }
    return 0;
}
