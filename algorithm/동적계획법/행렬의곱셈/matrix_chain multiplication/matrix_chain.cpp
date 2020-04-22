#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;
	cin >> N;
	vector<pair<int, int>> matr;

	int prev;
	cin >> prev;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		matr.push_back(make_pair(prev, input));
		prev = input;
	}

	

}