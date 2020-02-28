#include<iostream>
#include <vector>
#include <set>

using namespace std;
int N, B, E;
set<int> hourglass;
bool check = false;

void get_hourglass(vector<int> used, int sum, vector<int> glass, int prev) {
	if (check) return;

	if (sum > B + E) {
		if (prev >= B - E && prev <= B + E) {
			for (auto a : used)
				hourglass.insert(a);
			check = true;
		}
		return;
	}
	else {
		for (int i = 0; i < N; i++) {
			used.push_back(glass[i]);
			get_hourglass(used, sum + glass[i], glass, sum);
		}
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> B >> E;
		hourglass.clear();
		vector<int> glass(N);

		for (int i = 0; i < N; i++)
			cin >> glass[i];

		for (auto a : glass) {
			if (hourglass.find(a) != hourglass.end())
				continue;
			vector<int> tmp;
			tmp.push_back(a);
			get_hourglass(tmp, a, glass, 0);
			check = false;
		}
		cout << "#" << test_case << " " << hourglass.size() << endl;


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}