#include <stdio.h>
#include <stdlib.h>
#include "function.h"
void insert_increase_list(Node**head, int data)
{
	Node *np = *head, *nq;
	if(*head==NULL){
		*head = (Node*) malloc(sizeof(Node));
		(*head)->data = data;
		(*head)->next = NULL;
	}else{
		while(1){
			if(data<=np->data){
				Node *insert;
				insert = (Node*) malloc(sizeof(Node));
				insert->data = data;
				insert->next = *head;
				*head = insert;
				break;
			}
			else if(data>np->data){
				if(np->next == NULL){
					np->next = (Node*) malloc(sizeof(Node));
					(np->next)->data = data;
					(np->next)->next = NULL;
					break;
				}else if(data<=(np->next)->data){
					nq = (Node*) malloc(sizeof(Node));
					nq->next = np->next;
					nq->data = data;
					np->next = nq;
					break;
				}else{
					np =np->next;
				}
			}
		}
	}
}
