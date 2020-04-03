#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second)
        return a.first<b.first;
	return a.second>b.second;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)	{
		int N,M;
        cin>>N>>M;
        
        vector<pair<int,int>> nums;
        
        for(int i=0; i<=N+M; i++)
            nums.push_back(make_pair(i,0));
        
        for(int i = 1; i<=N;i++){
         for(int j=1;j<=M;j++){
         		nums[i+j].second++;
         }
        }
        
        sort(nums.begin(), nums.end(), cmp);
		
       int maxx=nums[0].second;
        vector<int> ans;
        
        for(auto a : nums)
			if(a.second == maxx)
                ans.push_back(a.first);
                
        cout<<"#"<<test_case<<" ";
		for(auto a : ans)
            cout<<a<<" ";
        cout<<endl;
        
        nums.clear();
        ans.clear();
        
}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.

}