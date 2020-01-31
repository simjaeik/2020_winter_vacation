#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	vector<int> binary;

	for (int i = 0; i < n; i++)
		binary.push_back(arr1[i] | arr2[i]);

	for (auto a : binary) {
		string tmp = "";
		for (int i = 0; i < n; i++) {
			if (a % 2 == 0)
				tmp.append(" ");
			else
				tmp.append("#");
			a /= 2;
		}
		reverse(tmp.begin(), tmp.end());
		answer.push_back(tmp);
	}

	return answer;
}