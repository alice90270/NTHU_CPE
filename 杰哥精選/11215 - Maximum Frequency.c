#include <stdio.h>

int main(){
    char n;
    int count[26];
    int i, max;
    max = 0;
    for(i = 0; i < 26; i++){
        count[i] = 0;
    }
    while(scanf("%c", &n)!=EOF){
        if(n == '\n'){
            for(i = 0; i < 26; i++){
                if(count[i] > max)
                    max = count[i];
                count[i] = 0;
            }
            printf("%d\n", max);
            max = 0;
        }
        if(n > 64 && n < 91)
            count[n-'A']++;
        else if(n > 96 && n < 123)
            count[n-'a']++;
    }
    return 0;
}
