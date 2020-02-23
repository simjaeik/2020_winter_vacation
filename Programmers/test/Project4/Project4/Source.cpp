#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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
	int num[5];
	int T = getchar() - '0'; getchar();

	for (int i = 0; i < 5; i++)
	{
		num[i] = getchar() - '0'; getchar();
	}

	for (auto a : num)
		cout << a << endl;
	cout << T;
}
