//#include<iostream>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	cin >> T;
//
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		string num;
//		cin >> num;
//
//		set<char> set;
//
//		for (int i = 0; i < num.length(); i++){
//			auto itr = find(set.begin(), set.end(), num[i]);
//
//			if (itr == set.end()) {
//				set.insert(num[i]);
//				continue;
//			}
//			set.erase(itr);
//		}
//
//		cout << "#" << test_case << " " << set.size() << endl;
//
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}