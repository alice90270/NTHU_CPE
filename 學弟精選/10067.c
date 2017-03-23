#include<stdio.h>
int main(void)
{
	char letter[10]={'A','B','C','D','E','F','G','H','I'}; 
	int i;
	scanf("%d",&i);
	printf("%c%c%c",letter[i/100-1],letter[(i%100)/10-1 ],letter[i%10-1]);
	return 0; 
 } 
 
