#ifndef SEQLISTZL
#define SEQLISTZL
#include "LinerList.h"
template<class T>
class SeqList:public LinerList<T>
{
public:
	SeqList(int maxSize=4);
	~SeqList(){delete[] elements;}	
	bool IsEmpty()const;
	int Length()const;
	bool Find(int index,T& x)const;
	int Search(T x)const;//return the index of x,if x does not exist, return -1
	bool Insert(int index,T x);//Insert x at array[index]
	bool Delete(int index);
	bool Update(int index,T x);
	void Output(std::ostream& out)const;
private:
	T* elements;
	int maxLength;
};

#endif
