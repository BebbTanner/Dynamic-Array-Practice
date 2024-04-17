/*
Dynamic array practice
A dynamic array is an array whose size can be created during the runtime of program.
*/

#include <iostream>
using namespace std;

const int Capacity = 1000;

int main() {

	/*
	This is a declaration of a pointer labeled dArray. 
	dArray is then defined as a new integer array using the capacity variable defined above.
	*/
	int* dArray;
	dArray = new int[Capacity];

	/*
	This is hard coding 4 values to the first 4 items in the dArray.
	*/
	dArray[0] = 0;
	dArray[1] = 1;
	dArray[2] = 2;
	dArray[3] = 3;

	cout << "Current array: " << endl;

	/*
	This is a for loop that is going to print out the 4 values defined above.
	*/
	for (int i = 0; i < 4; i++) {
		cout << dArray[i] << endl;
	}

	return 0;
}