#include <iostream>

using namespace std;
int main() {
	int n, count = 0;
	cin >> n;

	while (n != 0) {

		for (int i = 2; i < n; i++) {
			bool sr=true;
			for (int j = 2; j <= i; j++) {
				if (i % j == 0 && n % j == 0) {
					sr = false;
					break;
				}
			}
			if (sr) count++;
		}
		cout << count << endl;
		count = 0;
		cin >> n;
	}


}