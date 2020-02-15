#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>

string solution(string s) {
	string answer = "";
	vector<int> tmp;

	while (s.find(" ") < s.length()) {
		cout << s << endl;
		tmp.push_back(stoi(s));
		s = s.substr(s.find(" ")+1, s.length());
	}
	sort(tmp.begin(), tmp.end());
	answer = to_string(tmp.front()) + " " + to_string(tmp.back());

	return answer;
}

int main() {

	solution("1 2 3 4");
	string a = "1 2 3 4";

	cout << a.find("-");
}
// incomplete
