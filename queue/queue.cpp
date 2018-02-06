#include <iostream>
#include "queue.h"
#include "node.h"

using namespace std;

void queue_insert(queue *L);
void queue_remove(queue *L);
void print_queue(queue *L);

int main()
{
	cout << "--QUEUE DATA STRUCTURE--\n\n";
	queue *L = new queue();
	char option = '0';
	while(option != '9')
	{
		switch(option)
		{
			case '0':
				cout << "-option 0 to repeat this menu;\n";
				cout << "-option 1 to insert a element into the queue;\n";
				cout << "-option 2 to delete a element of the queue;\n";
				cout << "-option 3 to see the size of the queue;\n";
				cout << "-option 4 to print the queue;\n";
				cout << "-option 9 to exit of the program;\n\n";
				break;
			case '1':
				queue_insert(L);
				break;
			case '2':
				queue_remove(L);
				break;
			case '3':
				cout << "size: " << L->get_size() << "\n";
				break;
			case '4':
				print_queue(L);	
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

void queue_insert(queue *L)
{
	double value;
	if(!L->get_size())
	{
		node *newest = new node();
		L->head = newest;
		L->tail = newest;
		L->inc_size();
		cout << "value: ";
		cin >> value;
		newest->set_value(value);
	}
	else
	{
		node *newest = new node();
		newest->next = L->head;
		L->head->prev = newest;
		L->head = newest;
		L->inc_size();
		cout << "value: ";
		cin >> value;
		newest->set_value(value);
	}
}

void queue_remove(queue *L)
{
	if(L->tail == NULL)
		cout << "queue is empty!\n";
	else if(L->tail->prev == NULL)
	{
		L->tail = NULL;
		L->dec_size();
	}
	else
	{
		L->tail = L->tail->prev;
		L->tail->next = NULL;
		L->dec_size();
	}
}

void print_queue(queue *L)
{
	node *iterator = new node();
	iterator = L->head;
	if(iterator == NULL)
		cout << "queue is empty!\n";	
	cout << "queue: ";
	while(iterator != NULL)
	{
		cout << iterator->get_value() << " ";
		iterator = iterator->next;
	}
	delete iterator;
}


