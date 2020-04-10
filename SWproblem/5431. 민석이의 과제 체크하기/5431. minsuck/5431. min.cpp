#include<iostream>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int N,K;
        cin>>N>>K;
        
        map<int,int> per;
        for(int i=0; i < N; i++)
			per[i+1]=i+1;
        
        for(int i=0;i < K; i++){
         	int n;
            cin>>n;
            
            per.erase(n);
        }
        
        cout<<"#"<<test_case<<" ";
        for(auto a : per)
            cout<<a.second<<" ";
        cout<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}