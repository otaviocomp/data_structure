#include "tree.h"

void constructor(no *noh){
	noh->left = NULL;
	noh->right = NULL;
}

void insert(no *noh, int *h){
	int val;
	printf("value: ");
	scanf("%d", &val);
	if(noh == NULL){
		no *new_noh;
		constructor(new_noh);
		new_noh->value = val;
		printf("new_noh value: %d\n", new_noh->value);
		noh = new_noh;
		printf("noh value: %d\n", new_noh->value);
	}
	else if(val <= noh->value){
		*h++;
		insert(noh->left, h);
	}
	else{ 
		*h++;
		insert(noh->right, h);
	}
}

void del(no *noh, int *h){
	if(*h == 0 && noh == NULL)
		printf("tree is empty!\n");
}

void printTree(no *noh, int *h){
	if(*h == 0 && noh == NULL)
		printf("%d\n", noh->value);
}
