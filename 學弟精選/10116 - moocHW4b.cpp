#include<stdio.h>
#include<string.h>
char s[20] = {0};
int len;
void hanoi(char from,char to,char buffer,int n)
{
	if (n==len) return ; 
	hanoi(from,buffer,to,n+1);
	printf("%c:%c->%c\n",s[n],from,to);
	hanoi(buffer,to,from,n+1);

}
int main(void)
{	
	scanf("%s",s);
	len = strlen(s);
	hanoi('0','1','2',0);
	return 0;
}
