#include <iostream>

using namespace std;

int main() {
	int N, List[10], Max, Min;
	cout << "Enter the number of elements : ";
	cin >> N;
	cout << "Enter Elements : " << endl;
	for (int i = 0; i < N; i++) {
		cin >> List[i];
	}
	Max = List[0];
	Min = List[0];
	for (int j = 0; j < N; j++) {
		if (List[j] > Max) {
			Max = List[j];
		}
		if (List[j] < Min) {
			Min = List[j];
		}
	}
	cout << "Max : " << Max << endl;
	cout << "Min : " << Min << endl;
	return EXIT_SUCCESS;
}