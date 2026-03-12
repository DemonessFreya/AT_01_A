#include <iostream>
#include <cassert>

int hitAcc(int numHits, int numShots);

int main() {
	std::cout << hitAcc(20, 30) << std::endl;

	assert(hitAcc(20, 50) < 100); // check that arguments don't return a percentage greater than 100

	std::cout << "---- end of code ----" << std::endl;

	return 0;
}

int hitAcc(int numHits, int numShots) {
	if (numHits > numShots) {
		std::cerr << "\nERROR, line 9 // Number of hits is greater than shots fired //\n\n";
		return NULL;
	} // check if number hits are greater than number shots and if so return an error and a NULL value

	float accuracy = 0.0f;

	accuracy = (static_cast<float>(numHits) / static_cast<float>(numShots)) * 100.0f; // cast integers to floats so they will not lose data during / operation

	return static_cast<int>(accuracy); // return accuracy cast to integer which implicitly rounds the previous float
}
