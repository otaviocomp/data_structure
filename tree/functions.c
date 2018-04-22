#include "tree.h"

void constructor(no *noh){
	noh->left = NULL;
	noh->right = NULL;
}

void insert(struct node *noh, int *h){
	double val;
	printf("value: ");
	scanf("%lf", &val);

	if(noh == NULL){//tree is empty
		printf("entrou!\n");
		no *new_noh;
		constructor(new_noh);
		new_noh->value = val;
		noh = new_noh;
		*h = 1;
	}
	//tree is not empty
	else if(val <= noh->value && noh != NULL)
		insert(noh->left, h++);
	else 
		insert(noh->right, h++);
}

void del(no *noh, int *h){
	if(*h == 1){
		noh = NULL;
		*h = 0;
	}
}

void print(no *noh, int *h){
	if(*h == 1)
		printf("%lf", noh->value);
}
