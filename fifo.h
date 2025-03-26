#pragma once
#pragma once
class FIFO
{
public:
	FIFO();
	FIFO(int size);
	~FIFO();
	void Put(int item);
	void printDataElements();
private:
	int* data;
	int size;
	int count;
};
