#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<int, double> a, pair<int, double> b) {
	if (a.second == b.second)
		return a.first > b.first;

	return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
	vector<double> fail(N + 2);
	vector<double> pass(N + 2);
	vector<pair<int,double>> pass_rate(N + 2);
	vector<int> answer;

	for (auto a : stages) {
		fail[a]++;
		for (int i = 1; i <= a; i++)
			pass[i]++;
	}

	for (int i = N; i > 0; i--) {
		if (pass[i] == 0 || fail[i] == 0) {
			pass_rate[i] = make_pair(i, 0);
			continue;
		}
		pass_rate[i] = make_pair(i, fail[i] / pass[i]);
	}

	sort(pass_rate.begin()+1, pass_rate.end()-1, cmp);

	for (int i = 1; i < pass_rate.size()-1; i++)
		answer.push_back(pass_rate[i].first);

	return answer;
}


int main() {
	vector<int> a = { 2, 1, 2, 6, 2, 4, 3, 3 };

	a = solution(5, a);
	for (int i : a)
		cout << i << " ";
}