#include <stdio.h>

int main(){
    int num, l, i, j, k, n, tmp1, tmp2;
    int tab[50000];
    for(i = 0; i < 50000; i++)
        tab[i] = 0;
    num = 170;
    for(l = 0; l < num; l++){
        for(i = 0; i < num; i++){
            for(j = 0; j < num; j++){
                for(k = 0; k < num; k++){
                    tmp1 = l*l + i*i + j*j + k*k;
                    tmp2 = l+i+j+k;
                    if(tmp1 > 50001)
                        break;
                    if(tab[tmp1] < tmp2)
                        tab[tmp1] = tmp2;
                }
            }
        }
    }
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &tmp1);
        printf("%d\n", tab[tmp1]);
    }
    return 0;
}
