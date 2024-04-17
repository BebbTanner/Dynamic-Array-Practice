/*
Dynamic array practice
A dynamic array is an array whose size can be created during the runtime of program.

With the template setup for the Dynamic array, Now I want to try and make something out of it.
*/

#include <iostream>
using namespace std;

int main() {

	int Capacity;

/*
This lets the user define capacity of the dynamic array.
*/
	cout << "How many values do you want to store in this array?: " << endl;
	cin >> Capacity;

/*
This is a declaration of a pointer labeled dArray. 
dArray is then defined as a new integer array using the capacity variable defined above.
*/
	int* dArray;
	dArray = new int[Capacity];



/*
This is a for loop that will ask the user to input the values they want to store.
*/
	cout << "Please enter your " << Capacity << " values: " << endl;
	for (int j = 0; j < Capacity; j++) {
		cin >> dArray[j];
	}

/*
This is a for loop that will print out the values that are currently stored in dArray.
*/
	cout << "The values you entered are: " << endl;
	for (int i = 0; i < Capacity;i++) {
		cout << dArray[i] << endl;
	}

/*
This is a for loop that will print out the memory addresses of the values in the array.
*/
	cout << "Memory locations of the values: " << endl;
	for (int k = 0; k < Capacity; k++) {
		cout << &dArray[k] << endl;
	}

/*
This deletes the array pointer that was defined at the top of int main.
*/
	delete[] dArray;

	return 0;
}