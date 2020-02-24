#include <iostream>
#include <string>

using namespace std;

int main() {

	int T;
	cin >> T;

	for (int Tc = 1; Tc <= T; Tc++)
	{
		cout << "#" << Tc<<endl;

		int N;
		cin >> N;

		string answer;

		for (int i = 0; i < N; i++)
		{
			string alpha;
			int num;
			cin >> alpha>>num;
			
			for (int j = 0; j < num; j++)
				answer += alpha;
		}

		int len = answer.length()/10;
		
		for (int i = 0; i < len; i++) 
			cout << answer.substr(10 * i, 10) << endl;

		cout << answer.substr(10 * len, 10 * len + answer.length() % 10) << endl;
	}

}