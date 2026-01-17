
#include "leapyear.h"
#include <iostream>

using namespace std;

void testEquality(int year, bool expectedResult) { //year is passed from main, and so is expectedResult

	bool codeOutcome = func(year); // call func with year passed into the function - compare that outcome with the expectedResult. expectedResult may come from outside calculation.
	
	if (codeOutcome == expectedResult) {
		cout << "Code outcome yields expected result" << "\n";
	}
	else {
		cout << "Expected Output: " << expectedResult << '\n';
		cout << "Program output" << codeOutcome << '\n';
	}
}
