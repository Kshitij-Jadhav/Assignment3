#include <iostream>

using namespace std;

int main() {
	int N, M = 0;
	cout << "Enter any integer : ";
	cin >> N;
	if (N <= 99999) {
		int temp = N;
		while (temp) {
			int digit = temp % 10;
			M *= 10;
			M += digit;
			temp /= 10;
		}
		(M > N) ? cout << "M is greater than N" : cout << "M is not greater than N";
		return EXIT_SUCCESS;
	}
	else {
		cout << "Enter only 5 digit number or less" << endl;
		return EXIT_FAILURE;
	}
}