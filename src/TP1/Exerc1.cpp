//============================================================================
// Name        : TP1-1.cpp
// Author      : baddi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main1() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	char c = '\x01';
	short int p = 10;

	cout << p + 3 << endl;
	cout << c + 1 << endl;
	cout << p + c << endl;
	cout << 3 * p + 5 * c << endl;

	return 0;
}
