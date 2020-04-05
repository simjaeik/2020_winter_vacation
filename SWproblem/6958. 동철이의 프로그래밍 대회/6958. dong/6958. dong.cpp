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
		int N,M;
        cin>>N>>M;
        
        vector<int> nums(M+1);
        
        for(int i=0;i<N;i++){
            int sum=0;
         for(int j=0; j<M;j++){
             int n;
             cin>>n;
             sum+=n;
         }   
            nums[sum]++;
        }
        
        int ans_id=0, ans_val=0;
        for(int i=M;i>=0;i--){
        	if(nums[i]!=0){
            	ans_id=i;
                ans_val=nums[i];
                break;
            }
        }
        
        cout<<"#"<<test_case<<" "<<ans_val<<" "<<ans_id<<endl;
	}	
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}