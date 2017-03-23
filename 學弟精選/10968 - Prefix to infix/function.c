#include <stdio.h>
#include "function.h"

void printInfix(Node *root)
{
	if(root!=NULL){
		printInfix(root->left);
		printf("%c",root->data);
		if((root->right)!=NULL&&((root->right)->data=='&'||(root->right)->data=='|')) printf("(");
		printInfix(root->right);
		if((root->right)!=NULL&&((root->right)->data=='&'||(root->right)->data=='|')) printf(")");
	}
}
