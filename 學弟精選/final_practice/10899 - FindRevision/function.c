#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
/*
typedef struct{
    char Name[15];
    char Height[15];
    char Weight[15];
} Info;
*/
void Find_Revise(Info* list , int n, char instr, int* isend)
{
	int i, j, k, T;
	int s1, s2;
	char cmp[10];
	if(instr=='R'){
		scanf("%d", &i);
		scanf(" %s %d %d", list[i].Name, &list[i].Height, &list[i].Weight);
	}else if(instr=='e'||instr=='E'){
		*isend=1;	
	}else if(instr=='F'){
		scanf("%s",cmp);
		s1 = strlen(cmp);
		for(i=0;i<n;i++){
			T=1;
			s2 = strlen(list[i].Name);
			for(j=0;j<s2-s1;j++){
				for(k=0;k<s2;k++){
					if()
				}
			}
		}
	}
 } 
