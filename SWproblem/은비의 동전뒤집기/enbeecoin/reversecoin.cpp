#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int N, answer(0);
vector<int> coin_back;

void make_coin(vector<int> coin, vector<int> maked) {
	
	if (coin.empty()) {
		
		for (auto a : maked)
			cout << a << " ";
		cout << endl;
		coin_back.assign(N, -1);

		for (int i = 0; i < N - 1; i++)
			for (int j = i + 1; j < N; j++)
				if (maked[i] < maked[j])
					coin_back[j] *= -1;
		
		for (auto a : coin_back)
			if (a == 1)
				answer++;

		answer %= 1000000007;
		
		return;
	}
	for (vector<int>::iterator i = coin.begin(); i != coin.end();i++) {
		maked.push_back(*i);
		int tmp = *i;
		coin.erase(i);
		make_coin(coin, maked);
		if(!coin.empty())
			coin.insert(i, tmp);
	}

}


int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		cin >> N;
		vector<int> coin;
		vector<int> coin_back;

		for (int i = 0; i < N; i++)
			coin.push_back(i+1);

		for (int i = 0; i < N; i++) {
			vector<int> tmp;
			tmp.push_back(coin[i]);
			vector<int> rec = coin;
			coin.erase(coin.begin() + i);
			make_coin(coin, tmp);
			coin = rec;
		}

		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}