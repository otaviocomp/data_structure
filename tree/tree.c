#include <stdio.h>

struct node{
	double value;
	struct node *left;
	struct node *right;
};

void constructor(struct node *noh);
void insert(struct node *noh, int *h);
void delete(struct node *noh, int *h);
void print(struct node *noh, int *h);

int main(){
	printf("--BINARY TREE DATA STRUCTURE--\n\n");
	char option = '0';
	int h = 0;
	double value;
	struct node *root; 
	while(option != '9'){	
		switch(option){
			case '0':
				printf("-option 0 to repeat this menu;\n");
				printf("-option 1 to insert a element into the tree;\n");
				printf("-option 2 to delete a element of the tree;\n");
				printf("-option 3 to see the size of the tree;\n");
				printf("-option 4 to print the tree;\n");
				printf("-option 9 to exit of the program;\n\n");
				break;
			case '1':
				insert(root, &h);
				break;
			case '2':
				delete(root, &h);
				break;
			case '3':
				printf("height of the tree = %d\n", h); 
				break;
			case '4':
				print(root, &h);
				break;
			default:
				printf("invalid option!\n\n");
				break;
		}
		printf("option: ");
		scanf("%c", &option);
	}
}

void constructor(struct node *noh){
	noh->left = NULL;
	noh->right = NULL;
}

void insert(struct node *noh, int *h){
	double val;
	printf("value: ");
	scanf("%lf", &val);

	if(noh == NULL){//tree is empty
		printf("entrou!\n");
		struct node *new_noh;
		constructor(new_noh);
		new_noh->value = val;
		noh = new_noh;
		*h = 1;
	}
	//tree is not empty
	*h++;
	else if(val <= noh->value && noh != NULL)
		insert(noh->left, h);
	else 
		insert(noh->right, h);
}

void delete(struct node *noh, int *h){
	if(*h == 1){
		noh = NULL;
		*h = 0;
	}
}

void print(struct node *noh, int *h){
	if(*h == 1)
		printf("%lf", noh->value);
}
