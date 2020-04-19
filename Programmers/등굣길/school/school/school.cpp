#include <string>
#include <vector>
#include <iostream>

using namespace std;
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int N,M,ans(0), miin ;
vector<vector<int>> miro;
void dfs(int x, int y, int cnt){
    
    
    if(x==N-1 && y==M-1){
        
        if(cnt<miin){
            miin = cnt;
            ans=0;
        }
        ans++;
        
        return;
    }
    miro[x][y]=1;
    for(int i=0; i<4; i++){
        int nx = x + dir[i][0];
        int ny= y + dir[i][1];
        if(nx < 0 || ny < 0 || nx >= N || ny >= M || miro[nx][ny]!=0 || cnt+1 > miin)
            continue;
        dfs(nx,ny,cnt+1);
    }
    miro[x][y]=0;
}

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    N=n; M=m; miin = n*m;
    
    for(int i=0;i<n; i++){
        vector<int> tmp(m,0);
        miro.push_back(tmp);
    }
    
    for(auto a : puddles){
        miro[a[0]-1][a[1]-1]=2;
    }
    
    dfs(0,0, 1);
    
    return ans;
}