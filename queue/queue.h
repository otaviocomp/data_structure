#ifndef QUEUE
#define QUEUE	

#include "node.h"

class queue
{
	private:
		unsigned long int size;
	public:
		node *head, *tail;
		queue();
		~queue();
		void inc_size();
		void dec_size();
		unsigned long int get_size();
};

queue::queue()
{
	head = NULL;
	tail = NULL;
	size = 0;
}

queue::~queue()
{
	delete head;
	delete tail;
}

void queue::inc_size()
{
	size++;
}

void queue::dec_size()
{
	size--;
}

unsigned long int queue::get_size()
{
	return size;
}

#endif
