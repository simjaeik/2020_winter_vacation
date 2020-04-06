#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int N,M;
        cin>>N>>M;
        vector<int> nums(N);
        
        for(int i=0; i<N;i++)
			cin>>nums[i];
        
        sort(nums.rbegin(), nums.rend());
        
        nums.erase(nums.begin()+M,nums.end());
        
        sort(nums.begin(), nums.end());
        
        long double ans=0;
        
        for(auto a : nums)
            ans = (ans+a)/2;

        cout<<"#"<<test_case<<" "<<ans<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}