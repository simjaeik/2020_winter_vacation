#include <iostream>

int func(int n){
    if(n==0)
        return 0;
    else
    {
        return n + func(n-1);
    }
    
}

int main(){

    std::cout<<func(4);
}