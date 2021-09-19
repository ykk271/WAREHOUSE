#pragma once
#include <assert.h>
#include <iostream>

template<typename T>
template<typename T, unsigned int T_SIZE>
class MyArray
{
private:
	//T m_length;
	T* m_data;

public:
	MyArray()
	{
		/*m_length = 0;
		m_data = nullptr;*/
		m_daya = new T[T_SIZE];
	}	

	MyArray()
	{
		//m_data = new T[length];
		//m_length = length;
		delete[] m_data;
	}

	~MyArray()
	{
		reset();
	}

	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength()
	{
		return m_length;
	}

	void print();
};



