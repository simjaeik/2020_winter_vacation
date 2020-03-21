#include <string>
#include <iostream>

std::string solution(std:: string s) {
    std::string answer = "";
    
    if (s.length() % 2 == 0) 
        answer = s.substr(s.length() / 2 - 1, 2);
    else 
        answer = s[s.length()/2];
    
    return answer;
}

int main() {
    //std::cout << solution("qweasdfasr");

    std::string a = "hello";
    std::cout << a.substr(2,2);
}