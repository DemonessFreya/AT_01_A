#include <iostream>
#include <cassert>

int minElement();

int main() {
	assert(minElement() == 2, "Minimum element is 2");

	std::cout << minElement() << std::endl; // print the min number for given array

	return 0;
}

int minElement() {
	int arr[] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };

	int min = arr[0];

	// iterate through each element in the array and decide whether previous value is smaller than current
	for (auto i : arr ) {
		if (i < min) {
			min = i;
		}
	}

	return min;
}
