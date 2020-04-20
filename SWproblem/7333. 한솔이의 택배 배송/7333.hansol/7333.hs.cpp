#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
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

		while (!boxes.empty()) {
			int box = boxes[0];
			boxes.erase(boxes.begin());
			if (box < 50) {
				if (boxes.size() < 50 / (box + 1))
					break;
				for (int j = 0; j < 50 / (box + 1); j++) {
					if (!boxes.empty())
						boxes.erase(boxes.end() - 1);
				}
			}
			ans++;
		}
		cout << "#" << test_case << " " << ans << endl;
<<<<<<< HEAD
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
=======
	}*/

	vector<int> a = { 3,4,5 };
	
	a.erase(a.end()-1);
	
	for (auto i : a)
		cout << i << endl;

	return 0;
}
>>>>>>> ce31e43c2d99ad52ea33d2ef21492bb38f34944b
