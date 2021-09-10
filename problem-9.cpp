#include <iostream>
#include <math.h>

using namespace std;

int main () {
	float a = 0;
	float b = 0;
	float c = 0;

	for (a = 1; a < 1000; a++) {
		for (b = a + 1; b < 1000 && a + b + c <= 1000; b++) {
			c = (a * a) + (b * b);
			c = sqrt(c);
			if (a + b + c == 1000) {
				cout << a << " " << b << " " << c << " " << a * b * c << endl;
				return 0;
			}
		}
	}
	cout << "finished" << endl;
}
