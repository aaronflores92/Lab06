/**********
	Aaron Flores
	1105995
	
	arrayStack.cpp
	Create a class/struct.
	
	Members: 
	MaxSize const = 10
	Define an array that holds 10 items
	Count- indicates how many items are on the stack
	
	Methods:
	Push
	- Accepts a number & adds to the top of the stack
	- If the stack is full emit an error indicating full.
	Pop
	- Returns a number from the top of the stack
	- If the stack is empty, emit an error indicating the stack is empty
	IsEmpty
	- Returns a boolean indicating if the stack is empty.
**********/

#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
	std::cout << "Implementing Stack class based on an array." << endl;
	Stack test;
	
	test.is_empty(); //
	for (int i = 1; i <= 7; i++) test.push(i);
	
	for (int i = 1; i <= 4; i++) std::cout << test.pop() << endl;
	
	for (int i = 1; i <= 10; i++) test.push(i);
	
	for (int i = 1; i <= 10; i++) std::cout << test.pop() << endl;
	return 0;
}
