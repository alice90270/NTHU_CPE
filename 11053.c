#include<stdio.h>
#include <string.h>

int main()
{
    int i, j, N;
    char str[1000][60], temp[60];

    while(scanf("%d", &N)!=EOF){

        if(N==0) break;

        for(i=0; i<N; ++i)
            scanf("%s[^\n]",str[i]);
        for(i=0; i<N; ++i)
            for(j=i+1; j<N ; ++j)
            {
                if(strcmp(str[i], str[j])>0)
                {
                    printf("i: %s, j: %s\n", str[i], str[j]);
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], temp);
                }
            }

        printf("\nIn lexicographical order: \n");
        for(i=0; i<N; ++i)
        {
            puts(str[i]);
            str[i]="";
        }

    }
    return 0;
}

