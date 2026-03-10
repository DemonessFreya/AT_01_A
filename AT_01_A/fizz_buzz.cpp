#include <iostream>
#include <string>

// part (2)

void fizzBuzz();

int main() {
	fizzBuzz();
	
	std::cout << "----- end of code -----" << std::endl;
	return 0;
}

void fizzBuzz() {
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