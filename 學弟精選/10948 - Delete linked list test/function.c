#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void deleteNode(Node **head, int i)
{
	Node *curr, *pre;
	for(curr = *head;curr!=NULL;){
		if((*head)->data==i){
			*head = (*head)->next;
			free(curr);
			curr = *head;
			continue;
		}else{
			pre = curr;
			curr = curr->next;
			if(curr!=NULL){
				if(curr->data==i){
					pre->next = curr->next;
					free(curr);
					curr = pre;
				}
			}
		}
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
