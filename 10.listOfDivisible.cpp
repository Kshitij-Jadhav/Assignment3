#include <iostream>

using namespace std;

int main() {
	int N, L1[10], D;
	cout << "Enter the number of elements : ";
	cin >> N;
	cout << "Enter Elements : " << endl;
	for (int i = 0; i < N; i++) {
		cin >> L1[i];
	}
	cout << "Enter D : ";
	cin >> D;
	int L2[10], M = 0;
	for (int j = 0; j < N; j++) {
		if (L1[j] % D == 0) {
			L2[M++] = L1[j];
		}
	}
	cout << "L1 ";
	for (int x = 0; x < N; x++) {
		cout << L1[x] << " ";
	}
	cout << "\nL2 ";
	for (int y = 0; y < M; y++) {
		cout << L2[y] << " ";
	}
	cout << "\nSize of L2 : " << M << endl;
	return EXIT_SUCCESS;
}