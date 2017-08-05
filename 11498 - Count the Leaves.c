#include<stdio.h>
#include <stdlib.h>


int main(){
    int i, j, testcase, a, b, leaf, root;
    while(scanf("%d", &testcase)!=EOF){
        if(testcase==0)
            break;

        int *parent;
        int *children;
        parent = (int*)malloc(sizeof(int)*testcase);
        children = (int*)malloc(sizeof(int)*testcase);

        for(i=0;i<testcase;i++){
            scanf("%d %d", &a, &b);
            parent[i]=a;
            children[i]=b;
        }
        scanf("%d", &root);
        leaf=0;
        for(i=0;i<testcase;i++){
            for(j=0;j<testcase;j++){
                if(children[i]==parent[j])
                    break;
                if(children[i]!=parent[j]){
                    if(j==testcase-1)
                        leaf++;
                }
            }
        }
        printf("%d\n", leaf);


    }
    return 0;
}
