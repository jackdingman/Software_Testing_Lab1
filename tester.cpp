//Jack Dingman
//Software Testing: Lab 1

#include <iostream> //preprocessor directives
#include <math.h>
#include "leapyear.h"

using namespace std;

int main() {

	//First section of code allows for input of a year. Purpose of writing code was to give me an idea of elements that I could test.

	int year = 0; //could be point of testing - maybe not an int variable
	bool truth = 0; //Maybe another point of testing

	cout << "Enter a year for testing" << '\n';

	cin >> year;

	truth = func(year);

	if (truth) {
		cout << "'Tis a leap year" << '\n';
	}
	else {
		cout << "Not a leap year" << '\n';
	}

	////////////////////////////////
	//testEquality function available in test_cases.cpp. Compare expected result with actual code outcome.
	cout << "Test Suite:" << '\n';

	//First four cases are random testing years that target certain requirements
	testEquality(800, true);
	testEquality(900, false);
	testEquality(404, true);
	testEquality(501, false);
	testEquality(2000, true);
	testEquality(1900, false);


	//Generate some random tests





}
