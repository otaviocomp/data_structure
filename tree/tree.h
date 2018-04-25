#include <stdio.h>

typedef struct noh{
	int value;
	struct noh *left;
	struct noh *right;
}no;

void constructor(no *node);
void insert(no *node, int *h);
void del(no *node, int *h);
void printTree(no *node, int *h);
