#include <iostream>
#include "stack.h"

using namespace std;

void Stack::push(int n)
{
	if(counter >= size) std::cout << "Stack is full, cannot push value onto stack." << endl;
	else
	{
		array[counter] = n;
		std::cout << "Index " << counter << " contains the value ";
		std::cout << n << endl;
		counter++;
	}
}

int Stack::pop()
{
	if(Stack::is_empty())
	{
		std::cout << "The stack is empty, cannot pop a value." << endl;
		return -1;
	}
	else
	{
		std::cout << "The value " << array[counter-1] << " should appear: " << endl;
		counter--;
		return array[counter];
		
	}
}

bool Stack::is_empty()
{
	return(counter == 0);
}
