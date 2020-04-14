#include <algorithm>
#include <vector>
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int N,ans(0);
        cin>>N;
        vector<int> nums(N);
        
        for(int i=0; i<N;i++)
			cin>>nums[i];
		
        sort(nums.rbegin(), nums.rend());
        
        for(int i=0; i<N;i++){
        	if(i%3==2)
                continue;
            ans+=nums[i];
        }
        
        cout<<"#"<<test_case<<" "<<ans<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}