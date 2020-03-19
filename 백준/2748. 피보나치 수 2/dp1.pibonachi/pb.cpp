#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	long long pibo[90];
	pibo[0] = 0;
	pibo[1] = 1;

	for (int i = 2; i <= n; i++)
		pibo[i] = pibo[i - 2] + pibo[i - 1];
	
	cout << pibo[n];

}