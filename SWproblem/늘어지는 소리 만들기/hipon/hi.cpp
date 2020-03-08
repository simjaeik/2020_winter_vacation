#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){

		string word;
		int H;
		cin >> word >> H;
		
		vector<int> hi(word.length()+1, 0);
		for (int i = 0; i < H; i++){
			int n;
			cin >> n;
			hi[n]++;
		}
		
		for (int i = word.length(); i >= 0; i--){
			if (hi[i] != 0)
				word.insert(i, hi[i], '-');
		}

		cout << "#" << test_case << " " << word << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}