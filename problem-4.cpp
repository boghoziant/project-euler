// Problem 4 from Project Euler
// Find the largest palindrome made from two 3-digit numbers
// 1. Start at 2 largest 3 digit numbers
// 2. decrement second number until palindrome is found
// 3. store palindrome
// 4. keep doing this for every(i don't think it's necessary though) combination of 3 digit numbers

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int p) {

	// Convert palindrome to string to access elements
	string pal = to_string(p);
	int length = to_string(p).length();

	// Variables to keep track of element position
	int leftElement = 0;
	int rightElement = length - 1;

	// Palindrome is checked via leftmost and rightmost elements
	for(int i = length; i > 0; i = i - 2) {

		if((pal.at(leftElement)) != (pal.at(rightElement)))
			return false;		
		
		leftElement++;
		rightElement--;
	}

	return true;
}

int main() {

	int temp = 0;

	for(int i = 999; i > 99; i--) {	// O(constant)
		for(int j = 999; j > 99; j--) {
			if( isPalindrome(i * j) && ( (i * j) > temp))
				temp = i * j;
		}
	}

	cout << temp << endl;
}
