#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int N, M, ans(0);
        cin>>N>>M;
	
        vector<int> ground(N);
        for(int i =0; i<N;i++)
            cin>>ground[i];
        
        for(int i = 0; i<N;i++){
        	int sum = ground[i];
            
            int j =i+1;
            while(sum<M && j<N){
             	sum+=ground[j];
                j++;
            }
            if(sum==M)
            	ans++;
        }
        
		cout<<"#"<<test_case<<" "<<ans<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}