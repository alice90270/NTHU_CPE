
#include<stdio.h>
#include<string.h>
int main(void){
	int i;
	char a[1000000];
    while(scanf("%s", a) !=EOF){
        for(i=strlen(a)-1; i>=0; i--){
        printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0 ;
}
