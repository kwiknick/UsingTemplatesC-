// week8c++.cpp : Defines the entry point for the console application.
// Nicholas Willard

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template <class nick>
nick findLargerValue(nick a, nick b) {

	if (a > b) {
		cout << a << " is the larger number." << endl;
	}
	else if (a < b) {
		cout << b << " is the larger number." << endl;
	}
	else {
		cout << "The numbers are both the same value." << endl;
	}

	return a + b;
}

template <class nick>
class Trip {
public:
	int length;
	
	Trip::Trip() {
		cout << "Please enter the length of the trip: ";
		cin >> length;
		}
};

int main()
{
	double num1d, num2d;
	int num1i, num2i, mtrip, ytrip;

	cout << "Please enter the first integer to compare: ";
	cin >> num1i;

	cout << "\nPlease enter the second integer to compare: ";
	cin >> num2i;

	findLargerValue(num1i, num2i);

	cout << "Please enter the first double to compare: ";
	cin >> num1d;

	cout << "\nPlease enter the second double to compare: ";
	cin >> num2d;

	findLargerValue(num1d, num2d);

	Trip<int> myTrip;
	mtrip = myTrip.length;
	Trip<int> yourTrip;
	ytrip = yourTrip.length;

	findLargerValue(mtrip, ytrip);

	system("pause");
    return 0;
}

