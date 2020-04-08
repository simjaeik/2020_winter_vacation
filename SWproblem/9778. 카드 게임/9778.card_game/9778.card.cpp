#include<iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int N, sum=0;
        cin>>N;
        
        vector<int> nums = { 0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 16, 4 };
        
        for(int i=0; i < N; i++){
            int n;
            cin>>n;
            nums[n]--;
            sum+=n;
        }
		
        int cut = 21-sum;
        int up(0), down(0);

        for(int i= 2; i <= cut;i++)
        	down += nums[i];
        
        for(int i = cut+1; i<=11; i++)
			up += nums[i];
        
        string ans;
        
        if(down > up )
            ans = "GAZUA";
        else
            ans = "STOP";
        
        cout<<"#"<<test_case<<" "<<ans<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}