#include "StackV.h"
#include <iostream>

using namespace std;

//Vector data structure

int Stack::size()
{
	return data.size(); //From vector notes
}

void Stack::push(int)
{
	data.push_back(int);
}
   
void Stack::pop()
{
	data.pop_back(); //From vector notes
}

int Stack::top()
{
	//View element at the top. Stacks are LIFO. Should view last element.
	int x = data.size() - 1; //last index
	cout << "Element at the top is: " << x;
}

void Stack::clear()
{
	
}
