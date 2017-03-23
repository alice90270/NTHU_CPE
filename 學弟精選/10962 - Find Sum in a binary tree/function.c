#include <stdio.h>
#include <stdlib.h>
#include "function.h"
int i = 0;
int Sum(Node *root){
	if(root!=NULL){
		i+=root->data;
		Sum(root->left);
		Sum(root->right);
	} 
	return i;
} 
