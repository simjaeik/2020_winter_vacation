#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
	int answer = s.length();

	int len = s.length();

	for (int i = 1; i <= len / 2; i++) {
		string tok = s.substr(0, i);
		string str = s.substr(i);
		string ans = "";

		std::vector<string> word;
		std::vector<int> count;

		word.push_back(tok);
		count.push_back(1);

		while (str.length() > 0) {
			tok = str.substr(0, i);
			if (str.length() < i) {
				word.push_back(tok);
				count.push_back(1);
				break;
			}
			str = str.substr(i);

			if (word[word.size() - 1] == tok) {
				count[count.size() - 1]++;
				continue;
			}
			word.push_back(tok);
			count.push_back(1);
		}

		for (int i = 0; i < word.size(); i++) {
			if (count[i] != 1)
				ans += std::to_string(count[i]) + "" + word[i];
			else
				ans += word[i];
		}

		if (answer == 0 || answer > ans.length())
			answer = ans.length();
	}

	return answer;
}

int main() {

	std::string a = "hello";
	std::cout << solution("aabbcbbb");
	std::cout << a.substr(2);
}