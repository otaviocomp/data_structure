#include "tree.h"

void constructor(no *node){
	node->left = NULL;
	node->right = NULL;
}

void insert(no *node, int *h){
	int val;
	printf("value: ");
	scanf("%d", &val);
	if(node == NULL){
		no *new_node;
		constructor(new_node);
		new_node->value = val;
		printf("new_node value: %d\n", new_node->value);
		node = new_node;
		printf("node value: %d\n", new_node->value);
	}
	else if(val <= node->value){
		*h++;
		insert(node->left, h);
	}
	else{ 
		*h++;
		insert(node->right, h);
	}
}

void del(no *node, int *h){
	if(*h == 0 && node == NULL)
		printf("tree is empty!\n");
}

void printTree(no *node, int *h){
	if(*h == 0 && node == NULL)
		printf("%d\n", node->value);
}
