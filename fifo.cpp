#include "FIFO.h"
#include <iostream>
using namespace std;
FIFO::FIFO() //paraméterezettlen konstruktor
{
	data = NULL;
	size = 0;
	count = 0;
}
FIFO::FIFO(int size) //paraméterezett konstruktor
{
	data = NULL;
	this->size = size;
	count = 0;
	if (size != 0)
	{
		data = new int[size];
	}
}
FIFO::~FIFO() //destruktor
{
	delete[] data;
}
void FIFO::Put(int item)
{
	if (count >= size)
	{
		int* temp = new int[count + 1];
		for (int i = 0; i < count; i++)
		{
			temp[i] = data[i];
		}
		temp[count] = item;
		count++;
		delete[] data;
		data = temp;
	}
	else
	{
		data[count] = item;
		count++;
	}
}
void FIFO::printDataElements()
{
	for (int i = 0; i < size; i++)
	{
		cout << this->data[i] << endl;
	}
}