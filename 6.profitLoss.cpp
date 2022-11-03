#include <iostream>

using namespace std;

int main() {
	int cp, sp;
	cout << "Enter cost price : " << endl;
	cin >> cp;
	cout << "Enter sell price : " << endl;
	cin >> sp;
	(sp > cp) ? cout << "PROFIT=" << sp - cp << endl : cout << "LOSS=" << cp - sp << endl;
	return EXIT_SUCCESS;
}