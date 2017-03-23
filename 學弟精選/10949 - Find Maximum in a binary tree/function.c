#include <stdio.h>
#include <stdlib.h>
#include "function.h"
int maxValue(Node *tree)
{
		static int max;
		if(tree == NULL) return max;
		if(tree->data>max) max = tree->data;
		maxValue(tree->left);
		maxValue(tree->right);	
} 
