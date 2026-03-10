#include <iostream>
#include <string>
#include <cassert>

// part (2)

// 1.

void fizzBuzz();

// 2.

bool assertFizzBuzz(int input);

int main() {
	//fizzBuzz(); // asks for user input and prints whether the result is "Fizz", "Buzz", "Fizz Buzz", or none of the latter.

	assert(assertFizzBuzz(7));
	std::cout << "-----" << std::endl;
	assert(assertFizzBuzz(3));
	std::cout << "-----" << std::endl;
	assert(assertFizzBuzz(5));
	std::cout << "-----" << std::endl;
	assert(assertFizzBuzz(15));
	
	std::cout << "----- end of code -----" << std::endl;
	return 0;
}

void fizzBuzz() {
	// 1.
	int input;

	std::cin >> input;

	if (input % 3 == 0 && input % 5 == 0) {
		std::cout << "Fizz Buzz!" << std::endl;
	}
	else if (input % 3 == 0) {
		std::cout << "Fizz!" << std::endl;
	}
	else if (input % 5 == 0) {
		std::cout << "Buzz!" << std::endl;
	}
	else {
		std::cout << std::to_string(input) << std::endl;
	}
}

bool assertFizzBuzz(int input) {
	// 2.
	if (input % 3 == 0 && input % 5 == 0) {
		std::cout << "Fizz Buzz!" << std::endl;
		return true;
	}
	else if (input % 3 == 0) {
		std::cout << "Fizz!" << std::endl;
		return true;
	}
	else if (input % 5 == 0) {
		std::cout << "Buzz!" << std::endl;
		return true;
	}
	else {
		std::cout << std::to_string(input) << std::endl;
		return true;
	}
}