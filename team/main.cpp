#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ok = 0;
	while (n > 0) {
		int p, v, t;
		cin >> p >> v >> t;
		if (p + v + t >= 2)
			ok++;
		n--;
	}
	cout << ok << endl;
}
