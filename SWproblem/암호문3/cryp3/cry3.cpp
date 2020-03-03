#include<iostream>
#include <vector>

using namespace std;

vector<int> cryp;

void my_insert(int x, vector<int> s) {
	for (int i = x+1; i < s.size(); i++)
		cryp.insert(cryp.begin()+i, s[i]);
	return;
}

void my_erase(int x, int y) {
	cryp.erase(cryp.begin() + x, cryp.begin() + x + y);
	return;
}

void my_add(int y, vector<int> s) {
	for (auto a : s)
		cryp.push_back(a);
	return;
}

int main(int argc, char** argv)
{
	int test_case;
	
	for (test_case = 1; test_case <= 10; ++test_case){

		int N;
		cin >> N;
		cryp.clear();
		cryp.assign(N, 0);

		for (int i = 0; i < N; i++)
			cin >> cryp[i];
		
		cin >> N;
		char spell;
		for (int i = 0; i < N; i++) {
			cin >> spell;
			if (spell == 'I') {
				int x, y;

				cin >> x >> y;
				vector<int> s(y);
				for (int i = 0; i < y; i++)
					cin >> s[i];
				my_insert(x, s);
			}
			else if (spell == 'D') {
				int x, y;
				cin >> x >> y;
				my_erase(x, y);
			}
			else if (spell == 'A') {
				int y;
				cin >> y;

				vector<int> s(y);
				for (int i = 0; i < y; i++)
					cin >> s[i];

				my_insert(y, s);
			}
			
		}
		cout << "#" << test_case << " ";
		for (int i = 0; i < 10; i++)
			cout << cryp[i] << " ";
		cout << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}