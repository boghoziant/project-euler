// Problem 7 from Project Euler
/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number? */ 

#include <iostream>


// Find first 10001 primes
int main() {

	long long int primes[10001] = {};
	primes[0] = 2;
	long long int primeCount = 0;
	long long int factorCount = 0;

	// We want 10000 primes
	for (long long int prime = 2; primeCount < 10002; prime++) {
		for (long long int factor = 0; factor < primeCount; factor++) {
			if (prime % primes[factor] == 0) {
				factorCount++;
			}
			if (factorCount == 1) {
				break;
			}
		}
		if ( factorCount == 0) {
			primes[primeCount] = prime;
			primeCount++;
		}
		factorCount = 0;
	}


	for (int i = 0; i < 10001; i++) {
		std::cout << primes[i] << std::endl;
	}



	return 0;
}
