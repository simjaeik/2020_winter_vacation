#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main() {

	int T;
	cin >> T;

	for (int Tc = 1; Tc <= T; Tc++)
	{
		int answer = 0;
		vector<int> sum;

		for (int i = 0; i < 10; i++){
			int n;
			cin >> n;
			sum.push_back(n);
		}
		sort(sum.begin(), sum.end());
		sum.erase(sum.begin());
		sum.pop_back();

		for (auto a : sum)
			answer += a;

		cout << "#" << Tc << " " << floor((double)answer/8+0.5) << endl;
	}
}