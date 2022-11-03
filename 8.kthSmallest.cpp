#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, L1[10], K, sorted[10], M = 0;;
	cout << "Enter the number of elements : ";
	cin >> N;
	cout << "Enter Elements : " << endl;
	for (int i = 0; i < N; i++) {
		cin >> L1[i];
		sorted[i] = L1[i];
	}
	sort(sorted, sorted + N);
	cout << "Enter K : ";
	cin >> K;
	for (int j = 0; j < N; j++) {
		if (L1[j] == sorted[K - 1]) {
			M = j;
		}
	}
	cout << "Kth smallest integer=" << sorted[K - 1] << endl;
	cout << "Position of Kth smallest integer=" << M + 1 << endl;
	return EXIT_SUCCESS;
}