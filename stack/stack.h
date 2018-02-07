#ifndef STACK
#define STACK	

#include "node.h"

class stack
{
	private:
		unsigned long int size;
	public:
		node *top;
		stack();
		~stack();
		void inc_size();
		void dec_size();
		void stack_push(double value);
		void stack_pop();
		unsigned long int get_size();
};

stack::stack()
{
	top = NULL;
	size = 0;
}

stack::~stack()
{
	delete top;
}

void stack::inc_size()
{
	size++;
}

void stack::dec_size()
{
	size--;
}

void stack::stack_push(double value)
{
	if(this->top == NULL)
	{
		node *newest = new node();
		this->top = newest;
		this->inc_size();
		newest->set_value(value);
	}
	else
	{
		node *newest = new node();
		newest->down = this->top;
		this->top = newest;
		newest->down->up = newest;
		this->inc_size();
		newest->set_value(value);
	}
}

void stack::stack_pop()
{
	if(this->top->down == NULL)
	{
		this->top = NULL;
		this->dec_size();
	}
	else
	{
		this->top = this->top->down;
		this->top->up = NULL;
		this->dec_size();
	}
}

unsigned long int stack::get_size()
{
	return size;
}

#endif
