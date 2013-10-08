#ifndef LINERLISTZL
#define LINERLISTZL
#include<iostream>
template<class T>
class LinerList
{
public:
	virtual bool IsEmpty()const=0;
	virtual int Length()const=0;
	virtual bool Find(int index,T& x)const=0;
	virtual int Search(T x)const=0;//return the index of x,if x does not exist, return -1
	virtual bool Insert(int index,T x)=0;//Insert x at array[index]
	virtual bool Delete(int index)=0;
	virtual bool Update(int index,T x)=0;
	virtual void Output(std::ostream& out)const=0;
protected:
	int n;
};
#endif