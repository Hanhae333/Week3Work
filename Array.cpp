#include "Array.h"
#include "RangeArray.h"
#include <iostream>
using namespace std;
Array::Array(int size)
{

	len=size;
	data=new int[len];
}
Array::~Array()
{
	delete[] data;
}

int Array::length()
{
	return len;
}
int Array::operator[](int i)const
{
	if(i>0&&1<len)
		return data[i];
	else
	{
		cout<<"Array bound error"<<endl;
		return 0;
	}
}

int& Array::operator[](int i)
{
	static int temp;
	if(i>=0&&i<len)
	{
		return data[i];
	}
	else
	{
		cout<<"Array bound error"<<endl;
		return temp;
	}
}
void Array::print()
{
	int i=0;
	cout<<"[";
	for(i=0; i<len; i++)
		cout<<" "<<data[i]<<" ";
	cout<<"]";
}
