#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case){
		int N,M;
        cin>>N>>M;
        
        vector<int> cost(N);
        vector<int> pick(M);
        vector<int> ans(N);
        
        for(int i=0; i< N;i++)
            cin>>cost[i];
        for(int i =0; i<M;i++)
            cin>>pick[i];
        
        for(auto a : pick)
         	for(int i =0; i<N;i++)
            	if( cost[i] <= a ){
                    ans[i]++;
                	break;
                }

        int n = max_element(ans.begin(),ans.end()) - ans.begin() + 1;

        cout<<"#"<<test_case<<" "<<n<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}