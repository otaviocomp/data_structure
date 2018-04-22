#include "tree.h"

int main(){
	printf("--BINARY TREE DATA STRUCTURE--\n\n");
	char option = '0';
	int h = 0;
	double value;
	no *root; 
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
				del(root, &h);
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
