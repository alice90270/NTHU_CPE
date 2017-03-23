#include <stdio.h>
char list[10];
void show(int n)
{
    int i;
    printf("(%c", list[0]);
    for (i=1; i<n; i++) {
        printf(",%c", list[i]);
    }
    printf(")\n");
}

void Swap(int k, int i)
{
    char tmp;
    tmp=list[k];
    list[k]=list[i];
    list[i]=tmp; 
}

void Perm(int k, int n)
{
	int i; 
	if(k==n){
		show(n);
	} else{
		for(i=0;i<n-k;i++){
			Swap(k,k+i);
			Perm(k+1,n);
			Swap(k,k+i);
		}
	}
	
}
int main(void)
{
    int num, i;
    scanf("%d",&num);
    for(i=0; i<num; i++)
        list[i]='1'+i;
    Perm(0,num);
    return 0;
}
