#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, j, buf, out;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;
        int* in;
        in = (int*)malloc(sizeof(int)*n);
        for(i = 0; i < n; i++){
            scanf("%d", &buf);
            in[i] = buf;
        }
        //for(i = 0; i < n; i++)
        //    printf("%d", in[i]);
        out = 10000000;
        int all = pow(2, n);
        //printf("%d\n", all);
        for(i = 0; i < all; i++){

            buf = i;
            int grp0, grp1;
            grp0 = 0;
            grp1 = 0;
            for(j = 0; j < n; j++){
                //printf("i=%d j=%d\n", buf, j);
                if(buf%2 == 1){
                    //printf("    grp1: %d=%d+%d\n", grp1+in[j], grp1, in[j]);
                    printf("1");
                    grp1 = grp1+in[j];
                    }
                else{
                    //printf("    grp0: %d=%d+%d\n", grp0+in[j], grp0, in[j]);
                    printf("0");
                    grp0 = grp0+in[j];
                }

                buf = buf/2;
//                printf("group1=%d group2=%d\n", grp0, grp1);

            }
            //printf("%d %d\n", grp0, grp1);
            printf("  *** abs=%d, out=%d \n", abs(grp0-grp1), out);
            if(out > abs(grp0-grp1)){
                printf("  **UPDATE!** \n");
                out = abs(grp0-grp1);
            }
        }
        printf("%d\n", out);
        out = 0;
    }
    return 0;
}
