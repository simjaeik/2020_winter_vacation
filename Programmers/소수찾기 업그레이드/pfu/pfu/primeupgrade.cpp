#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>

using namespace std;

int solution(string numbers) {
	int answer = 0;
	vector<int> num(pow(10, numbers.length()));
	num[0] = 1, num[1] = 1, num[2] = 1;

	for (int i = 2; i * i < pow(10, numbers.length()); i++) {
		if (num[i] == 1)
			continue;
		for (int j = i + i; j < pow(10, numbers.length()); j += i)
			num[j] = 1;
	}

	sort(numbers.begin(), numbers.end());
	set<int> ans;

	do{
		string sub = numbers;
		for (int i = 1; i <= numbers.length(); i++) {
			cout << sub.substr(0, i) << endl;
			if (num[stoi(sub.substr(0, i))] == 0) {
				ans.insert(stoi(sub.substr(0, i)));
			}
		}
	} while (next_permutation(numbers.begin(),numbers.end()));



	return ans.size();
}

int main() {

	cout << solution("17");

}