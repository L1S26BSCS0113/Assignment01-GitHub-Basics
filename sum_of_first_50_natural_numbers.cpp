


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
