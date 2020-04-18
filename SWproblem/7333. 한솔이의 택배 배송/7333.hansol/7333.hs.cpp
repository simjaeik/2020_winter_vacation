#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	/*int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, ans(0);
		cin >> N;

		vector<int> boxes(N);
		for (int i = 0; i < N; i++)
			cin >> boxes[i];

		sort(boxes.rbegin(), boxes.rend());

		for (int i = 0; i < N; i++) {
			int box = boxes[i];
			if (box < 50) {
				for (int j = 0; j < 50 / box; j++) {
					if (!boxes.empty())
						boxes.erase(boxes.end() - 1);
				}
			}
			if (!boxes.empty())
				boxes.erase(boxes.begin());
			ans++;
		}
		cout << "#" << test_case << " " << ans << endl;
	}*/

	vector<int> a = { 3,4,5 };
	
	a.erase(a.end()-1);
	
	for (auto i : a)
		cout << i << endl;

	return 0;
}
