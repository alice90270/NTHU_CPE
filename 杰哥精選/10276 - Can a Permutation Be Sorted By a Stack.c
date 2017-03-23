#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n)!=EOF){
        int i, point, flag,cur;
        int st[n], in[n];
        for(i =0; i < n; i++){
            scanf("%d", &in[i]);
        }
        point = 0;
        i = 0;
        cur = 1;
        while(1){
            if(cur > n){
                flag = 0;
                break;
            }
            if(i >= n && st[point-1]!= cur){
                flag = 1;
                break;
            }
            //pop
            if(point != 0 && st[point-1] == cur){
                //printf("pop %d %d %d\n", point, st[point-1], cur);
                cur++;
                point--;
            }
            else if(in[i] == cur){//output
                //printf("output %d %d %d\n", i, in[i], cur);
                cur++;
                i++;
            }
            else{//push
                //printf("push %d\n", in[i]);
                st[point] = in[i];
                point++;
                i++;
            }
        }
        if(flag == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
