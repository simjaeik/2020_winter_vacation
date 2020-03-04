#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> gyu;

int answer = 0,cnt=0;
void play_game( vector<int> in, int p_gyu, int p_in, int turn){
	
	if (turn == 9) {
		if (p_gyu > p_in)
			answer++;
		return;
	}
	else {
		cnt++;
		for (int i = 0; i < in.size(); i++) {
			int score = gyu[turn] - in[i];
			int num = in[i];
			if (score > 0)
				p_gyu += score;
			else
				p_in += (-score);

			in.erase(in.begin() + i);
			play_game(in, p_gyu, p_in, turn + 1);
			in.insert(in.begin()+i, num);
		}

	}

}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case){
		gyu.assign(9,0);
		vector<int> in;

		for (int i = 0; i < 9; i++)
			cin >> gyu[i];

		for (int i = 1; i <= 18; i++){
			if (find(gyu.begin(), gyu.end(), i) == gyu.end())
				in.push_back(i);
		}

			play_game(in, 0, 0, 0);

		cout << "#" << test_case << " " << answer << " " << cnt<< endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}