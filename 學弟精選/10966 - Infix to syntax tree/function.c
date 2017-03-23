#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function.h"

BTNode* EXPR()
{
	char c;
	BTNode *node = NULL, *right = NULL;
	if(pos>=0){
		right = FACTOR();
		if(pos>0){
			c = expr[pos];
			if(c=='&'||c=='|'){
				node = makeNode(c);
				node->right = right;
				pos--;
				node->left = EXPR();
			}else node = right;
		}else node = right;
	}
	return node;
}
BTNode* FACTOR()
{
	char c;
	BTNode *node = NULL;
	if(pos>=0){
		c = expr[pos--];
		if(c>='A'&&c<='D'){
			node = makeNode(c);
		} else if(c==')'){
			node = EXPR();
			if(expr[pos--]!='('){
				printf("Error!\n");
				freeTree(node);
			}
		}
	}
	return node;
} 
BTNode* makeNode(char c)
{
	int i;
	BTNode *p;
	p = (BTNode*) malloc(sizeof(BTNode));
	for(i=0;i<6;i++){
		if(sym[i]==c){
			p->data = i;
		}
	}
	p->left =  NULL;
	p->right =  NULL;
	return p;
}

void printInfix(BTNode *root){
	if(root!=NULL){
		printInfix(root->left);
		printf("%c",sym[root->data]);
		if(root->right!=NULL){
			if(sym[root->right->data]=='&'||sym[root->right->data]=='|') printf("(");
			printInfix(root->right);
			if(sym[root->right->data]=='&'||sym[root->right->data]=='|') printf(")");
		}
		
	}
}
