// Problem 3 from Project Euler
// The prime factors of 13195 are 5, 7, 13 and 29.
// 
// What is the largest prime factor of the number 600851475143 ?
#include <iostream>
#include <vector>

using namespace std;

int main() {

	// Accept user input
	cout << "Input : ";
	long long int number;
	cin >> number;
	cout << endl;

	// Find every factor
	long long int divisor = 2;
	vector<long long int> factors;

	while(number != 1) {

		if(number % divisor == 0) {
			number = number / divisor;
			factors.push_back(divisor);
			divisor = 2;
		}
		else {
			divisor++;
		}

	}

	// Return biggest factor
	vector<long long int>::iterator it = factors.begin();
	long long int temp = 0;

	while(it != factors.end()) {
		if(*it > temp) {
			temp = *it;
		}

		it++;
	}

	cout << temp << endl;

	return 0;
}
