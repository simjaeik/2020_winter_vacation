#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int T;
	cin >> T;

	for (int Tc = 1; Tc  <= T; Tc ++){

		int N;
		cin >> N;
		int stu;
		vector<int> rec(101);

		for (int i = 0; i < 1000; i++){
			cin >> stu;
			rec[stu]++;
		}

		int max = *max_element(rec.begin(), rec.end());
		int answer;

		for (int i = 100; i >= 0; i--)
			if (rec[i] == max) {
				answer = i;
				break;
			}

		cout << "#" << Tc << " " << answer << endl;
	}

}