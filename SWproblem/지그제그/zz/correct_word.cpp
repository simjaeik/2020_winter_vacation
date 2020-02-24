//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<vector<int>> grid;
//int N, K;
//
//int main() {
//
//	int T;
//	cin >> T;
//
//	for (int Tc = 1; Tc <= T; Tc++)
//	{
//		cin >> N >> K;
//
//		for (int i = 0; i < N; i++){
//			vector<int> tmp;
//			for (int j = 0; j < N; j++) {
//				int n;
//				cin >> n;
//				tmp.push_back(n);
//			}
//			grid.push_back(tmp);
//		}
//
//		for (int i = 0; i < N; i++){
//			for (int j = 0; j < N; j++){
//				check_grid(i,j);
//
//			}
//		}
//
//
//		cout << "#" << Tc << " " << answer << endl;
//	}
//}