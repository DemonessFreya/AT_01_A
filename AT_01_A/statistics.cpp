//#include <iostream>
//#include <cassert>
//
//int hitAcc(int numHits, int numShots);
//
//int main() {
//	std::cout << hitAcc(20, 30) << std::endl;
//
//	// assertions
//	assert(hitAcc(70, 50) <= 100); // check that arguments don't return a percentage greater than 100
//
//	assert(hitAcc(3, 4) == 75);
//	assert(hitAcc(1, 2) == 50);
//	assert(hitAcc(13, 13) == 100);
//	assert(hitAcc(21, 173) == 12);
//	assert(hitAcc(0, 0) == 0);
//
//	std::cout << "---- end of code ----" << std::endl;
//
//	return 0;
//}
//
//int hitAcc(int numHits, int numShots) {
//	if (numHits > numShots) {
//		// check if number hits are greater than number shots and if so return an error and a NULL value
//		std::cerr << "\nERROR // Number of hits is greater than shots fired. //\n\n";
//		return NULL;
//	}
//
//	if (numHits == 0 && numShots == 0) {
//		// specific instance where no shots are fired nor hit
//		return 0;
//	}
//	else if (numShots == 0) {
//		// when number of shots are zero
//		std::cerr << "\nERROR // Division by zero is undefined. //\n\n";
//	}
//
//	float accuracy = 0.0f;
//
//	accuracy = (static_cast<float>(numHits) / static_cast<float>(numShots)) * 100.0f; // cast integers to floats so they will not lose data during division
//
//	return static_cast<int>(accuracy); // return accuracy variable cast to an integer which will implicitly round the float (i.e. 1.2 = 1)
//}
