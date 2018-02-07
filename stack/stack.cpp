#include <iostream>
#include "stack.h"
#include "node.h"

using namespace std;

void stack_print(stack *L);

int main()
{
	cout << "--STACK DATA STRUCTURE--\n\n";
	stack *L = new stack();
	double value;
	char option = '0';
	while(option != '9')
	{
		switch(option)
		{
			case '0':
				cout << "-option 0 to repeat this menu;\n";
				cout << "-option 1 to insert a element into the stack;\n";
				cout << "-option 2 to delete a element of the stack;\n";
				cout << "-option 3 to see the size of the stack;\n";
				cout << "-option 4 to print the stack;\n";
				cout << "-option 9 to exit of the program;\n\n";
				break;
			case '1':
				cout << "value: ";
				cin >> value;
				L->stack_push(value);
				break;
			case '2':
				if(L->top == NULL)
					cout << "stack is empty!\n";
				L->stack_pop();
				break;
			case '3':
				cout << "size: " << L->get_size() << "\n";
				break;
			case '4':
				stack_print(L);	
				cout << "\n";
				break;
			default:
				break;
		}
		cout << "option: ";
		cin >> option;
	}
	delete L;
}

void stack_print(stack *L)
{
	node *iterator = new node();
	iterator = L->top;
	if(iterator == NULL)
		cout << "stack is empty!\n";
	else
	{
		cout << "stack: ";
		while(iterator != NULL)
		{
			cout << iterator->get_value() << " ";
			iterator = iterator->down;
		}
	}
	delete iterator;
}


