#include <string>
#include <vector>
#include <iostream>
std::string solution(std::vector<std::string> seoul) {
	std::string answer = "";

	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i].compare("Kim") == 0 )
			answer = "�輭���� "+ std::to_string(i+1)+"�� �ִ�";
	}

	return answer;
}

int main() {
	std::vector<std::string> a = { "i","Kim", "mi", "Kimbab", "Jane","ji", "asd" };

	std::cout << solution(a);
}