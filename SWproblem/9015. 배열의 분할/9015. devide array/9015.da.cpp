#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case){
		int N, ans(0);
        cin>>N;
        
        vector<int> nums(N);
        for(int i=0;i<N;i++)
            cin>>nums[i];
        
        for(int i=0; i<N;){
         	int big(1), small(1), idx(i+1), num(nums[i]);
            while( idx < N && nums[idx]>= num){
                num = nums[idx];
				idx++;
                big++;
            }
            idx=i+1;
            num=nums[i];
            while( idx < N && nums[idx] <= num){
                num=nums[idx];
                idx++;
                small++;
            }
            i+=max(big,small);
            ans++;
        }
		
		cout<<"#"<<test_case<<" "<<ans<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}