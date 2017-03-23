#include <stdio.h>

int main(){
    int cases, c;
    scanf("%d", &cases);
    for(c = 0; c < cases; c++){
        int num, i;
        scanf("%d", &num);
        int stu[num], buf[num];
        for(i = 0; i < num; i++){
            scanf("%d", &stu[i]);
        }
        while(1){
            int fin = 0;
            for(i = 0; i < num; i++){
                if(stu[i] != stu[0]){
                    fin = 1;
                    break;
                }
            }
            if(fin == 0)
                break;
            for(i = 0; i < num; i++){
                if(stu[i]%2 == 1)
                    stu[i]++;
            }
            /*for(i = 0; i < num; i++)
                printf("%d ", stu[i]);
            printf("\n");*/
            for(i = 0; i < num; i++){
                if(i == 0){
                    buf[num-1] = stu[0]/2;
                    stu[0] = stu[0]/2;
                }
                else{
                    buf[i-1] = stu[i]/2;
                    stu[i] = stu[i]/2;
                }
            }
            /*for(i = 0; i < num; i++)
                printf("%d ", stu[i]);
            printf("\n");
            for(i = 0; i < num; i++)
                printf("%d ", buf[i]);
            printf("\n");*/
            for(i = 0; i < num; i++)
                stu[i] = stu[i] + buf[i];
            /*for(i = 0; i < num; i++)
                printf("%d ", stu[i]);
            printf("\n");*/
        }
        printf("%d\n", stu[0]);
    }
    return 0;
}
