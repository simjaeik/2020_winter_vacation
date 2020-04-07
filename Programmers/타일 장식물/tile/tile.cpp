#include <string>
#include <vector>

using namespace std;

long long answer = 4;

void fibo(long long f1, long long f2, int cnt, int n){
    
    if(cnt >= n){
        answer = f2*2 + (f1+f2)*2;
        return;
    }
    fibo(f2, f1+f2, cnt+1, n);
}

long long solution(int N) {
    
    fibo(1,1,2,N);
    
    return answer;
}