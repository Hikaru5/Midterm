#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Array()
{
private:
	int size;
	double *array=nullptr;

public:
	Array(int length)
	{
		array = double[length];
		size = length;
	}

	Array()
	{
		Array(0);
	}

	~Array()
	{
		delete[] array;
		array = nullptr;
	}

	void addNum(int index, double num)
	{
		array[index] = num;
	}

	double getValue(int index)
	{
		return array[index];
	}

	double getLargest()
	{
		int big = 0;
		for (int i = 0; i < size; i++)
		{
			if (big < array[i])
				big = array[i];
		}
		return big;
	}

	double getSmallest()
	{
		int tiny = array[0];
		for (int i = 0; i < size; i++)
		{
			if (tiny > array[i])
				tiny = array[i];
		}
		return tiny;
	}
};