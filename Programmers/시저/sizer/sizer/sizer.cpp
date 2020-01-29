#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";

	int c = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ') {
			answer += " ";
			c = 0;
			continue;
		}
		else if (c % 2 == 0) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				int a = s[i] - 'a' + 'A';
				answer += a;
			}
			else
				answer += s[i];
		}
		else if (c % 2 == 1) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				int a = s[i] - 'A' + 'a';
				answer += a;
			}
			else
				answer += s[i];
		}

		c++;
	}

	return answer;
}

int main() {

	std::cout << solution("asdfasdfasfas asdfas fsdaf sdaf  as ");
}