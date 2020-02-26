//#include<iostream>
//#include <stack>
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
//		int n;
//		cin >> n;
//		stack<int> stack;
//		int sum = 0;
//
//		for (int i = 0; i < n; i++){
//			int num;
//			cin >> num;
//			if (num == 0) {
//				stack.pop();
//				continue;
//			}
//			stack.push(num);
//		}
//
//		while (!stack.empty()) {
//			sum+=stack.top();
//			stack.pop();
//		}
//
//		cout << "#" << test_case << " " << sum << endl;
//
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}