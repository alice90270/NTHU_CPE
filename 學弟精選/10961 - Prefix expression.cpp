#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int prefix();
int main(void)
{
	printf("%d",prefix());
	return 0;
} 

int prefix()
{
	char c;
	int i;
	c = getchar();
	if(isspace(c)){
		prefix();
	}else if(c == '+'){
		return prefix()+prefix();
	}else if(c == '-'){
		return prefix()-prefix();
	}else{
		ungetc(c,stdin);
		scanf(" %d", &i);
		return i;
	}
}
