//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.first > b.first;
//}
//
//int main() {
//
//	int T;
//	cin >> T;
//
//	vector<string> score = { "A+", "A0", "A-", "B+", "B0", "B-", "C+","C0","C-","D0" };
//
//	for (int Tc = 1; Tc <= T; Tc++)
//	{
//		string answer;
//		int N, K;
//		vector<pair<int, int>> stu_score;
//		cin >> N >> K;
//
//		for (int i = 0; i < N; i++) {
//
//			int mid, fin, rep;
//			cin >> mid >> fin >> rep;
//
//			stu_score.push_back(make_pair(mid * 35 + fin * 45 + rep * 20, i+1));
//
//		}
//
//		sort(stu_score.begin(), stu_score.end(), cmp);
//
//		for (int i = 0; i < N; i++)
//		{
//			if (stu_score[i].second == K) {
//				answer = score[i / (N / 10)];
//				break;
//			}
//		}
//
//		cout << "#" << Tc << " " << answer << endl;
//	}
//}