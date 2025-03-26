#include <iostream>
#include "FIFO.h"
using namespace std;
int main()
{
	int size = 5;
	FIFO p1(size);
	for (int i = 0; i < size; i++)
	{
		p1.Put(i);
	}
	p1.printDataElements();
}