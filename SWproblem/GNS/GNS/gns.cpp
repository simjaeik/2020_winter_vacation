#include<iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	map<string, int> my_toint = { {"ZRO",0},{"ONE",1},{"TWO",2},{"THR",3},{"FOR",4},{"FIV",5},{"SIX",6},{"SVN",7},{"EGT",8},{"NIN",9} };
	map<int, string> my_tostr= { {0,"ZRO"},{1,"ONE"},{2,"TWO"},{3,"THR"},{4,"FOR"},{5,"FIV"},{6,"SIX"},{7,"SVN"},{8,"EGT"},{9,"NIN"} };

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		string what;
		cin >>what>> N;
		vector<int> answer(N);

		for (int i = 0; i < N; i++) {
			string input;
			cin >> input;
			answer[i]=my_toint[input];
		}

		sort(answer.begin(), answer.end());

		cout << "#" << test_case << endl;
		for (auto a : answer) 
			cout << my_tostr[a] << " ";
		
		cout << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}