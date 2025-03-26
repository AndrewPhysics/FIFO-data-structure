Simple FIFO data structure 
1.	Within the put function, the data pointer is responsible for storing the new data. That is why the data pointer is a protected member variable.data pointer is private
2.	put() function handles two situation: 
2.1 count>size: means that we have to allocate bigger size of memory
2.2 count<size: means FIFO data structure is ready to store new numbers
