#ifndef LINKEDSTACKZL
#define LINKEDSTACKZL
#include"Stack.h"

namespace zll
{
	
	template <class T> class LinkedStack;
	template<class T>
	class Node
	{
	private:
		T data;
		Node<T>* link;
		friend class LinkedStack<T>;
	};

	template<class T>
	class LinkedStack:public Stack<T>
	{
	public:
		LinkedStack():header(nullptr),num(0){}
		~LinkedStack()
		{
			Clear();
		}
		bool IsEmpty()const{return num==0;}
		bool IsFull()const{return false;}//LinkedStack will never be full
		T Pop()
		{
			T result=header->data;
			Node<T>* temp=header;
			header=header->link;
			num--;
			delete temp;
			return result;
		}
		bool Push(T &x)
		{
			Node<T>* temp=new Node<T>;
			temp->data=x;
			temp->link=header;
			header=temp;
			num++;
		}
		void Clear()
		{
			num=0;
			if (header)
			{
				Node<T>*p=header;
				while(header)
				{
					header=header->link;
					delete p;
					p=header;
				}
			}
		}
	private:
		Node<T> * header;
		int num;//The number of items in it
	};

}
#endif
