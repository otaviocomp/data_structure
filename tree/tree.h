#include <stdio.h>

typedef struct node{
	double value;
	struct node *left;
	struct node *right;
}no;

void constructor(no *noh);
void insert(no *noh, int *h);
void del(no *noh, int *h);
void print(no *noh, int *h);
