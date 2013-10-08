#include <iostream>
#include"SeqList.h"
using namespace std;
int main(int argc, char const *argv[])
{
	SeqList<int> myarray;
	for (int i = 0; i < 33; ++i)
	{
		myarray.Insert(i,i);
		myarray.Output(cout);
		cout<<endl;
	}
	myarray.Insert(3,333);
	myarray.Output(cout);	
	myarray.Insert(12,1212);
	myarray.Output(cout);
	myarray.Insert(21,2121);
	myarray.Output(cout);
	cout<<endl;
	cout<<"Hello World"<<endl;
	//system("pause");
	return 0;
}