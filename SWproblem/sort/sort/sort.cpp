#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int T;
	cin >> T;

	for (int Tc = 1; Tc <= T; Tc++)
	{
		int N;
		cin >> N;
		vector<int> vec;

		for (int i = 0; i < N; i++){
			int n;
			cin >> n;
			
			vec.push_back(n);
		}

		sort(vec.begin(), vec.end());

		cout << "#" << Tc << " ";
		for (auto a : vec)
			cout << a << " ";
		cout << endl;
	}

}