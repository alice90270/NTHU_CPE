#include <stdio.h>
#include <string.h>
#define MAX_SIZE 500

char content[MAX_SIZE];
char input[MAX_SIZE];

int main()
{
	freopen("11225.in","r",stdin);
	int i=0, cont=0, j, k;
    fgets(input, MAX_SIZE, stdin);
    /* your code here */
	while(input[i]!=0){
		if(input[i]!='/'){
			while(input[i]!='/'&&i<MAX_SIZE&&input[i]!=0){
				content[cont] = input[i];
				cont++;
				i++;
			}
		}else if(input[i]=='/'){
			i++;
			if(input[i]=='n'){
				content[cont]='\n';
				cont++;
				i+=7;
			}else if(input[i]=='b'){
				if(cont>0)cont--;
				content[cont]=0;
				i+=9;
			}else if(input[i]=='l'){
				if(cont>0){
					for(j=MAX_SIZE;j>cont-1;j--){
						content[j]=content[j-1];
					}
					cont--;	
				}
				i+=4;
			}else if(input[i]=='r'){
				if(content[0]!=0){
					for(j=cont;j<MAX_SIZE-1;j++){
						content[j]=content[j+1];
					}
					cont++;	
				}
				i+=5;
			}
		}
	}
    printf("%s", content);
    return 0;
}

