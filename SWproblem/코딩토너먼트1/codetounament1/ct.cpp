#include<iostream>
#include<cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int K, boring=0;
		cin >> K;

		vector<int> people(pow(2, K));
		vector<int> winner;

		for (int i = 0; i < people.size(); i++)
			cin>>people[i];

		while (people.size() > 1) {

			for (int i = 0; i < people.size(); i+=2){
				int sum = abs(people[i] - people[i + 1]);
				winner.push_back(max(people[i],people[i+1]));
				boring += sum;
			}
			people.clear();
			people = winner;
			winner.clear();
		}

		
		cout << "#" << test_case << " " << boring << endl;

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
