#include <string>
#include <vector>

using namespace std;

int get_1(int n){
    int count=0;
     while(n!=0){
        if(n%2==1)count++;
        n/=2;
    }
    return count;
}

int solution(int n) {
    int answer = n+1;
    int count = get_1(n);
    
    while(true){
        if(get_1(answer) == count)
            break;
        answer++;
    }
    
    if(n == 0)
        return 0;
    
    return answer;
}
