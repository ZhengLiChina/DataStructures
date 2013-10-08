#ifndef STACKZL
#define STACKZL

namespace zll
{
	template <typename T>
	class Stack
	{
		virtual bool IsEmpty()const=0;
		virtual bool IsFull()const=0;
		virtual T Pop()=0;
		virtual bool Push(T &x)=0;
		virtual void Clear()=0;
	};	
}

#endif