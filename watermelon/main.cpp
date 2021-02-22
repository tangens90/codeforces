#include <iostream>

using namespace std;

int main() {
	int W;
	cin >> W;
	if (W <= 0 || W == 2) {
		cout << "NO" << endl;
		return 0;
	}
	if (W & 1)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	return 0;
}
