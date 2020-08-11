// Problem 7 from Project Euler
/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number? */ 


// Find first 10001 primes
int main() {

	long long int prime = 1;
	long long int divisor = 2;

	vector<long long int> primeList;
	int count = 0;

	while(count < 10002) {

		// Divide new prime by previous primes to validate
		if(prime % primeList[i] == 0) {
			// Keep track of prime
			primeList.push_back(prime);

		}
		else {
		}

	}

	return 0;
}
