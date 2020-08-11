// Problem 6 from Project Euler
/* The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. */

#include <iostream>

int main() {

	int sumSquares = 0;
	int squareSums = 0;
	int difference = 0;

	// Sum of the squares of the first 100 natural numbers
	// And summing the first 100 natural numbers
	for(int i = 1; i < 101; i++) {
		sumSquares += i * i;
		squareSums += i;
	}

	// Square of the sum of the first 100 natural numbers
	squareSums *= squareSums;

	difference = squareSums - sumSquares;

	std::cout << difference;

	return 0;
}




