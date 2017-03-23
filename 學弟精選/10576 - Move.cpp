#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	struct Node *prev;
	struct Node *next;
	int data;
}Node;
int main(void)
{
	int N, a, b;
	char cmd[10];
	scanf("%d",&N);
	Node *loc = (Node*)malloc(sizeof(Node)*(N+1));
	Node *head=NULL;
	Node *tmp=NULL, *tmp2=NULL;
	head=&loc[1];
	loc[1].prev=NULL;
	loc[1].next=NULL;
	loc[1].data=1;
	
	for(int i=2;i<=N;i++){
		loc[i].data=i;
		loc[i].next=NULL;
		loc[i].prev=&loc[i-1];
		loc[i-1].next=&loc[i];
	} 
	
	while(scanf("%s",cmd)!=EOF){
		if(cmd[0]=='E') break;
		scanf(" %d %d", &a, &b);
		if(loc[a].next==&loc[b]) continue;
		
		tmp = loc[a].next;
		tmp2 = loc[b].prev;
		
		loc[a].next=&loc[b];
		loc[b].prev=&loc[a];
		
		head->prev=tmp2;
		tmp2->next=head;
		
		tmp->prev=NULL;
		head=tmp;
	}
	while(head!=NULL){
		if(head->prev!=NULL) printf(" ");
		printf("%d", head->data);
		if(N==1) break;
		head = head->next;
	}
	printf("\n");
	return 0;
}
