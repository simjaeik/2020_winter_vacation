#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool find_seoroso(int a, int b, int c) {
	
	for (int i = 2; i < c; i++) {
		if (a % i == 0 && b % i == 0)
			return false;
		else if (a % i == 0 && c % i == 0)
			return false;
		else if (b % i == 0 && c % i == 0)
			return false;
	}
	return true;
}

int main() {
	int count = 0;

	for (int i = 2; i < 99; i++) {
		for (int j = i + 1; j < 100; j++) {
			for (int k = j + 1; k <= 100; k++) {
				if (find_seoroso(i, j, k))
					count++;
			}
		}
	}
	cout << count;
}
