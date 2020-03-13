#include <string>
#include <vector>
#include <iostream>
using namespace std;

int answer;
void fibo(long prev, long now, long cnt) {
	if (cnt < 0) {
		answer = now;
		return;
	}
	fibo(now % 1234567, (prev + now )% 1234567, cnt-1);
}

int solution(long n) {
	fibo(0, 1, n-2);
	return answer;
}

int main() {

	cout << solution(10000000);
	
}