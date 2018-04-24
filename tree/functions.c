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
		noh = new_noh;
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
	if(*h == 1){
		noh = NULL;
		*h = 0;
	}
}

void print(no *noh, int *h){
	if(*h == 1)
		printf("%d", noh->value);
}
