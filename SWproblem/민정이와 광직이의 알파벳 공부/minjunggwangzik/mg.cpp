//#include<iostream>
//
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	
//	cin >> T;
//
//	for (test_case = 1; test_case <= T; ++test_case){
//
//
//
//		
//
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
//

#include <string>
#include <vector>
#include <iostream>
using namespace std;
//
//string solution(string number, int k) {
//	string answer = "";
//	string cmp = "";
//
//	while (k--) {
//
//		for (int i = 0; i < number.length() - 1; i++) {
//
//			if (number[i] > number[i + 1]) {
//				number.erase[i + 1];
//				k--;
//				break;
//			}
//			else if ()
//
//
//		}
//
//
//	}
//
//
//	return number;
//}

int main() {

	int n;
	cin >> n;

	vector<int> num(n+1);
	num[0] = 1; num[1] = 1;
	for (int i = 2; i <= n; i++){
		if (num[i] == 1) continue;
		for (int j = i + i; j <= n; j += i)
			num[j] = 1;
	}

	for (int i = 2; i <= n; i++){
		if (num[i] == 0)
			cout << i << " ";
	}

}