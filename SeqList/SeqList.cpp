#include"SeqList.h"
#include<iostream>
#include<cstring>
template<class T>
SeqList<T>::SeqList(int m)
{
	maxLength=2;
	if (m<=0)
	{
		m=4;		
	}
	while((maxLength*=2)<m);
	elements=new T[maxLength];
	memset(elements,0,maxLength*sizeof(T));
	int a=maxLength*sizeof(T);
	this->n=0;
}

template<class T>
bool SeqList<T>::IsEmpty()const
{
	return this->n==0;
}

template<class T>
int SeqList<T>::Length()const
{
	return this->n;
}

template<class T>
bool SeqList<T>::Find(int index,T& x)const
{
	if (index<0||index>=this->n)
	{
		return false;
	}
	x=elements[index];
	return true;
}

template<class T>
int SeqList<T>::Search(T x)const
{
	for (int i = 0; i < this->n; ++i)
	{
		if (elements[i]==x)
		{
			return i;
		}
	}
	return -1;
}

template<class T>
bool SeqList<T>::Insert(int index,T x)
{
	std::cout<<maxLength<<std::endl;
	if (index<0)
	{
		return false;
	}
	if (this->n==maxLength||index>=maxLength)
	{
		int newLength=0;//0==false
		if (index>=this->n)
		{
			newLength=index+1;
		}
		while((maxLength*=2)<=index);
	//std::cout<<maxLength<<std::endl;

		T* temp=new T[maxLength];

		memset(temp,0,maxLength*sizeof(T));
		for (int i = this->n-1; i >= index; --i)
		{
			temp[i+1]=elements[i];
		}
		temp[index]=x;
		int flag=index<this->n?index:this->n;
		for (int i = flag-1; i >=0; --i)
		{
			temp[i]=elements[i];
		}
		delete [] elements;
		elements=temp;
		this->n++;
		if (newLength)
		{
			this->n=newLength;
		}
		return true;
	}
	for(int i=this->n-1;i>=index;--i)
	{
		elements[i+1]=elements[i];
	}
	elements[index]=x;
	this->n++;
	return true;
}

template<class T>
bool SeqList<T>::Delete(int index)
{
	if (index<0||index>this->n-1)
	{
		return false;
	}
	for(int i=index+1;i<this->n;i++)
	{
		elements[i-1]=elements[i];
	}
	this->n--;
	return true;
}

template<class T>
bool SeqList<T>::Update(int index, T x)
{
	if (index<0||index>this->n-1)
	{
		return false;
	}
	elements[index]=x;
	return true;
}

template<class T>
void SeqList<T>::Output(std::ostream& out)const
{
	for (int i = 0; i < this->n; ++i)
	{
		out<<i<<":"<<elements[i]<<" ";
	}
	out<<"over"<<this->n<<std::endl;
}
