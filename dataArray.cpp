#include<string>
#include<fstream>
#include <iostream>
#include "dataArray.h"
#include <algorithm>
using namespace std;

//Code for checkIntInArray which takes the array, the size of the array, and what integer to be checked as arguments
// The code then compares the integer the user gave to each index in the array to see if it matches
//if it does, it returns " exists in the array at index " and the index it matched with.
void checkIntInArray(int da[], int len, int n) {
	for (int i = 0; i < len; i++)
	{
		if (da[i] == n) {
			cout << n << " exists in the array at index " << i << "." << endl;
			break;
		}
		if (i == len - 1) {
			cout << n << " does not exist in the array." << endl;
		}

	}
}

//Code for modifying an integer in the array with the array and the index as arguments
// saves the old integer in a variable called old from the array at index n, and gets a new userinput for the new value
// and saves the new integer at the array at index n with userinput c.
void modifyIntInArray(int da[], int n) {
	int old = da[n];
	int c = 0;
	cout << "Enter new integer to replace: ";
	cin >> c;
	da[n] = c;
	cout << "The new value is " << c << endl;
	cout << "The old value is " << old << endl;
}

//Code adding a new int to the array with the array, the size of array, and index as arguments
//Creates a new array that is one size larger, with the exact same integers in the same indexes as the old array
// with a new user inputted int n at the index len, which is the old size.
int* addNewIntToArray(int da[], int len, int n) {
	int* newArray = new int[len + 1];
	for (int i = 0; i < len; i++) {
		newArray[i] = da[i];
	}
	newArray[len] = n;

	return newArray;
}

//Code for removing an integer from the array with the array, and index as arguments
//Makes the integer at the user given index null, which is essentially removing it.
void removeIntInArray(int da[], int n) {
	da[n] = NULL;
	cout << da[n];
}