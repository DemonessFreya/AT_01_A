#include <iostream>

int minElement();

int main() {
	std::cout << minElement() << std::endl;

	return 0;
}

int minElement() {
	int arr[] = { 1, 3, 2, 5 };

	int min = arr[0];

	for (auto i : arr ) {
		if (i < min) {
			min = i;
		}
	}

	return min;
}