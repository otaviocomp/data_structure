#include <stdio.h>

typedef struct node{
	int value;
	struct node *left;
	struct node *right;
}no;

void constructor(no *noh);
void insert(no *noh, int *h);
void del(no *noh, int *h);
void printTree(no *noh, int *h);
