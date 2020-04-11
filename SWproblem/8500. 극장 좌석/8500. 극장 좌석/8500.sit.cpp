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
		int N;
        int num, ans(0);
        cin>>N;
        
        vector<int> nums(N);
        
        for(int i =0; i< N;i++)
            cin>>nums[i];
        
        sort(nums.begin(), nums.end());
        
        ans+=nums[0]+N;
        int prev = nums[0];
        
        for(int i=1; i<N;i++){
        	int num = nums[i];
            if(prev < num)
                ans+=num;
            else
                ans+=prev;
            prev=num;
        }
        ans+=prev;
        
        cout<<"#"<<test_case<<" "<<ans<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}