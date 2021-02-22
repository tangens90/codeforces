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
//	for (int i = 1; i < W/2; i++) {
//		if (i % 2 == 0 && (W - i) % 2 == 0) {
//			cout << "YES" << endl;
//			return 0;
//		}
//	}
//	cout << "NO" << endl;
//	return 0;
}
