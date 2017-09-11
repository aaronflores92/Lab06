#ifndef STACK_H
#define STACK_H

class Stack
{
	public:
		void push(int n);
		int pop();
		bool is_empty();
	
	private:
		static const int size = 10;
		int counter = 0;
		int array[size] = {};
};

#endif
