#ifndef NODE
#define NODE

class node
{
	private:
		double value;
	public:
		node *up, *down;
		node();
		~node();
		void set_value(double val);
		double get_value();
};

node::node()
{
	up = NULL;
	down = NULL;
}

node::~node()
{
	delete up;
	delete down;
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
