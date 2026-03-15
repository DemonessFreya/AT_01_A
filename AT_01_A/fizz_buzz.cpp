//#include <iostream>
//#include <string>
//#include <cassert>
//
//// part (2)
//
//// 1.
//void fizzBuzz(int input); // forward declaration of fizzBuzz
//
//// 2.
//bool assertFizzBuzz(int input);
//
//int main() {
//	// 1.
//	fizzBuzz(5);
//
//	// 2.
//	// checks for given test values
//	assert(assertFizzBuzz(7) && "Failed");
//	std::cout << "-----" << std::endl;
//	assert(assertFizzBuzz(3) && "Failed");
//	std::cout << "-----" << std::endl;
//	assert(assertFizzBuzz(5) && "Failed");
//	std::cout << "-----" << std::endl;
//	assert(assertFizzBuzz(15) && "Failed");
//	std::cout << "-----" << std::endl;
//
//	// 3.
//	for (int i = 1; i <= 20; ++i) {
//		fizzBuzz(i);
//	}
//	
//	std::cout << "----- end of code -----" << std::endl;
//	return 0;
//}
//
//void fizzBuzz(int input) {
//	// 1.
//	// if integer is divisible by 3 and 5, print Fizz Buzz!
//	if (input % 3 == 0 && input % 5 == 0) {
//		std::cout << "Fizz Buzz!" << std::endl;
//	}
//	// if integer is divisible by 3, print Fizz!
//	else if (input % 3 == 0) {
//		std::cout << "Fizz!" << std::endl;
//	}
//	// if integer is divisible by 5, print Buzz!
//	else if (input % 5 == 0) {
//		std::cout << "Buzz!" << std::endl;
//	}
//	// if integer is neither divisible by 3 or 5, print integer converted to string
//	else {
//		std::cout << std::to_string(input) << std::endl;
//	}
//}
//
//bool assertFizzBuzz(int input) {
//	// 2.
//	// debug function to pass in to assertion checks
//	if (input % 3 == 0 && input % 5 == 0) {
//		std::cout << "Fizz Buzz!" << std::endl;
//		return true;
//	}
//	else if (input % 3 == 0) {
//		std::cout << "Fizz!" << std::endl;
//		return true;
//	}
//	else if (input % 5 == 0) {
//		std::cout << "Buzz!" << std::endl;
//		return true;
//	}
//	else {
//		std::cout << std::to_string(input) << std::endl;
//		return true;
//	}
//}