/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Ali Murtaza
 * Reg No     : L1S26BSCS0113
 * Assignment : 01 - Getting Started with GitHub
 */



#include <iostream>
using namespace std;

int main() {
	int number = 50;
	int sum = 0;

	// Method 1: add numbers one by one using a loop
	for (int i = 1; i <= number; i++) {
		sum = sum + i;
	}
	cout << "Sum of first " << number << " Natural Numbers is: " << sum << endl;


	return 0;
}
