#include <iostream>

using namespace std;

int main() {
	int N, sum = 0;
	cout << "Enter any integer : ";
	cin >> N;
	if (N <= 99999) {
		int temp = 1;
		while (N) {
			int digit = N % 10;
			if (temp == 1 || temp == 5) {
				sum += digit;
			}
			temp++;
			N /= 10;
		}
		cout << "sum of first and fifth digit = " << sum;
		return EXIT_SUCCESS;
	}
	else {
		cout << "Enter only 5 digit number or less" << endl;
		return EXIT_FAILURE;
	}
}