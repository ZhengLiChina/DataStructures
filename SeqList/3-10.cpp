#include <iostream>
#include"LinkedStack.h"
using namespace std;

int main(int argc, char const *argv[])
{
	zll::LinkedStack<int> myStack;
	for (int i = 0; i < 5; ++i)
	{
		myStack.Push(i);
		//cout<<myStack.Pop()<<endl;
	}
	for (int i = 0; i < 3; ++i)
	{
		//myStack.Push(i);
		cout<<myStack.Pop()<<endl;
	}
	myStack.Clear();
	for (int i = 0+5; i < 5+5; ++i)
	{
		myStack.Push(i);
		//cout<<myStack.Pop()<<endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		//myStack.Push(i);
		cout<<myStack.Pop()<<endl;
	}
	return 0;
}