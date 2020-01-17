#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	unordered_map<string, int> map;

	while (!completion.empty()) {

		if (map[completion.back()] == 0)
			map[completion.back()] = 1;
		else
			map[completion.back()] ++;

		completion.pop_back();
	}

	while (!participant.empty()) {
		if (map[participant.back()] == 0) // participant에 없다면
			return participant.back();

		map[participant.back()]--;
		participant.pop_back();
	}

	return answer;
}

int main() {
	vector<string> a, b;

	a.push_back("mislav");
	a.push_back("stanko");
	a.push_back("mislav");
	a.push_back("mislav");
	a.push_back("ana");

	b.push_back("stanko");
	b.push_back("ana");
	b.push_back("mislav");
	b.push_back("mislav");

	unordered_map<string, int> map;

	std::cout << solution(a, b);

}