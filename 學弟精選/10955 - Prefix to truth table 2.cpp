#include <stdio.h>
#include <stdlib.h>
int a, b, c, d;
typedef struct treeNode
{
	char data;
	struct treeNode *left;
	struct treeNode *right;
} Node;
void cleantree(Node* root)
{
	if(root->left!=NULL) cleantree(root->left);
	if(root->right!=NULL )cleantree(root->right);
	free(root);
}
void tree(Node* node)
{
	char ch = getchar();
	if(ch=='|'||ch=='&'){
		node->left = (Node*) malloc(sizeof(Node));
		node->right = (Node*) malloc(sizeof(Node));
		tree(node->left);
		tree(node->right);	
	}else{
		node->left = NULL;
		node->right = NULL;
	}
	node->data = ch;	
}
int booli(Node *root)
{
	if(root->data=='|'){
		return booli(root->left) ||booli(root->right);
	}else if(root->data=='&'){
		return booli(root->left) &&booli(root->right);
	}else if(root->data=='A'){
		return a;
	}else if(root->data=='B'){
		return b;
	}else if(root->data=='C'){
		return c;
	}else if(root->data=='D'){
		return d;
	}
}
int main(void)
{
	Node* root;
	int i;
	root = (Node*) malloc(sizeof(Node));
	tree(root);
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			for(c=0;c<2;c++){
				for(d=0;d<2;d++){
					i = booli(root);
					if(i) printf("%d %d %d %d %d\n",a ,b, c, d, booli(root));
				}
			}
		}
	}
	cleantree(root);
	return 0;
} 
