#include <iostream>

using namespace std;

int main() {
	int N, M = 0;
	cout << "Enter any integer : ";
	cin >> N;
	if (N <= 99999) {
		int i = 1;
		while (N) {
			int digit = N % 10;
			digit++;
			digit *= i;
			M += digit;
			N /= 10;
			i *= 10;
		}
		cout << "M : " << M << endl;
		return EXIT_SUCCESS;
	}
	else {
		cout << "Enter only 5 digit number or less" << endl;
		return EXIT_FAILURE;
	}
}