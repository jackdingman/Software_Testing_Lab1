//int as parameter function
//Jack Dingman

#include "leapyear.h"

bool func(int insertion) {

	if (insertion % 400 == 0) {
		return 1;
	}

	else if (insertion % 100 == 0) {
		return 0;
	}

	else if (insertion % 4 == 0) {
		return 1;
	}

	else {
		return 0;
	}
}