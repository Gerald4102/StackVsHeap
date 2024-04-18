#include <iostream>
#include <string>

struct Vector3 // as object to use as an example for allocating memory
{
	float x, y, z;

	Vector3()
		: x(10), y(11), z(12) {}
};

int main()
{
	int value = 5; // an integer allocated on the STACK
	int array[5]; // an array allocated on the stack
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	Vector3 vector; // an object allocated on the stack

	int* hvalue = new int; // an integer allocated on the HEAP uses the 'New' keyword
	*hvalue = 5; // needs to be dereference before being assigned a value
	int* harray = new int[5]; // an array allocated on the heap
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	Vector3* hvector = new Vector3(); // an object allocated on the heap

	delete hvalue;
	delete[] harray;
	delete hvector;

	std::cin.get();
}