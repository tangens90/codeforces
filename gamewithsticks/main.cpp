#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int smaller = n < m ? n : m;
	if (smaller & 1)
		cout << "Akshat" << endl;
	else
		cout << "Malvika" << endl;
	return 0;
}
