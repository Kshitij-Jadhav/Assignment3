#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
	int N, M, A[10], B[10];
	vector<int> C(10), D(10);
	vector<int>::iterator it;
	cout << "Enter cardinality of A : ";
	cin >> N;
	cout << "Enter cardinality of B : ";
	cin >> M;
	cout << "Enter elements of A:" << endl;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	cout << "Enter elements of B:" << endl;
	for (int j = 0; j < M; j++) {
		cin >> B[j];
	}

	sort(A, A + N);
	sort(B, B + M);

	it = set_union(A, A + N, B, B + M, C.begin());
	C.resize(it - C.begin());

	it = set_intersection(A, A + N, B, B + M, D.begin());
	D.resize(it - D.begin());

	cout << "A";
	for (int x = 0; x < N; x++) {
		cout << " " << A[x] ;
	}
	cout << '\n';
	cout << "B";
	for (int y = 0; y < M; y++) {
		cout << " " << B[y];
	}
	cout << '\n';
	cout << "Cardinality of set C " << (C.size()) << " \n";
	cout << "C";
	for (it = C.begin(); it != C.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';
	cout << "Cardinality of set D " << (D.size()) << " \n";
	cout << "D";
	for (it = D.begin(); it != D.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';
	return EXIT_SUCCESS;
}