#include <iostream>

using namespace std;

int main() {
	int N, L1[10], M;
	cout << "Enter the number of elements : ";
	cin >> N;
	cout << "Enter Elements : " << endl;
	for (int i = 0; i < N; i++) {
		cin >> L1[i];
	}
	cout << "Enter M : ";
	cin >> M;
	int L2[10];
	for (int j = 0; j < N; j++) {
		L2[j] =  L1[j] * M;
	}
	cout << "L1 ";
	for (int x = 0; x < N; x++) {
		cout << L1[x] << " ";
	}
	cout << "\nL2 ";
	for (int y = 0; y < N; y++) {
		cout << L2[y] << " ";
	}
	return EXIT_SUCCESS;
}