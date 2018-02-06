#ifndef NODE
#define NODE

class node
{
	private:
		double value;
	public:
		node *next, *prev;
		node();
		~node();
		void set_value(double val);
		double get_value();
};

node::node()
{
	next = NULL;
	prev = NULL;
}

node::~node()
{
	delete next;
	delete prev;
}

void node::set_value(double val)
{
	value = val;
}

double node::get_value()
{
	return value;
}

#endif
