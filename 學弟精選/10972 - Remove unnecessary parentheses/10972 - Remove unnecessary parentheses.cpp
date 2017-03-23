#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char expr[256];  
int pos;

typedef struct _Node {
    char data;
    struct _Node *left, *right;
} BTNode;
BTNode* FACTOR();
BTNode* EXPR();
BTNode* makeNode(char c)
{
	int i;
	BTNode *p;
	p = (BTNode*) malloc(sizeof(BTNode));
	p->data = c;
	p->left =  NULL;
	p->right =  NULL;
	return p;
}
void freeTree(BTNode *root){
    if (root!=NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
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




void printInfix(BTNode *root){
	if(root!=NULL){
		printInfix(root->left);
		printf("%c",root->data);
		if(root->right!=NULL){
			if(root->right->data=='&'||root->right->data=='|') printf("(");
			printInfix(root->right);
			if(root->right->data=='&'||root->right->data=='|') printf(")");
		}
		
	}
}
int main(){
	scanf("%s", expr);
    pos = strlen(expr) - 1;
    BTNode *root = EXPR();
    printInfix(root);
    freeTree(root);
    return 0;
}

