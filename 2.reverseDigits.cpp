#include <iostream>

using namespace std;

int main() {
	int N, sumOfDigits = 0;
	cout << "Enter any integer : ";
	cin >> N;
	if (N <= 99999) {
		while (N) {
			int digit = N % 10;
			sumOfDigits *= 10;
			sumOfDigits += digit;
			N /= 10;
		}
		cout << "Sum of Digits : " << sumOfDigits << endl;
		return EXIT_SUCCESS;
	}
	else {
		cout << "Enter only 5 digit number or less" << endl;
		return EXIT_FAILURE;
	}
}