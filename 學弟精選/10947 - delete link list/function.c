#include <stdio.h>
#include <stdlib.h>
#include "function.h"
void deleteNode(Node ** nd, int data)
{
	int i;
	Node *np = *nd, *nq;
	nq= np;	
	if(!(data-1)){
		*nd = (*nd)->next;
		free(np);
	}else{
		for(i=1;i<data;i++){
			nq= np;
			np = np->next;
			if(np == NULL) return;
		}
		nq->next = np->next;
		free(np);	
	}
}
Node* createList()
{
	Node *Head, *np, *nq;
	int i;
	np = (Node*) malloc(sizeof(Node));
	Head = np;
	while(1){
		scanf("%d", &i);	
		if(i>-1){
			np->data=i;
			np->next = (Node*) malloc(sizeof(Node));
			nq = np;
			np = np->next;
		}
		else{
			nq->next = NULL;
			break;
		}
	}
	return Head;
}
