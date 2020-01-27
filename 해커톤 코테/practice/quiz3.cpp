//#include <iostream>
//#include <vector>
//
//int solution(std::vector<int>& A) {
//	int c1=0, c2 = 0;
//
//	for (int i = 0; i < A.size(); i++) {
//		if (i % 2 == 0 && A[i] == 1)
//			c1++;
//		else if (i % 2 == 1 && A[i] == 0)
//			c1++;
//	}
//
//	for (int i = 0; i < A.size(); i++) {
//		if (i % 2 == 0 && A[i] == 0)
//			c2++;
//		else if (i % 2 == 1 && A[i] == 1)
//			c2++;
//	}
//
//	return c1 >= c2 ? c1 : c2;
//}
//
//int main() {
//
//	std::vector<int> a = { 0,0,1,0,0,1,1 };
//
//	std::cout << solution(a);
//}