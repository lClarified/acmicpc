#include <iostream>

using namespace std;

int N,M,a[501][501],dp[501][501];
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};

int dfs(int x,int y){

    if(y==M&&x==N){
        return 1;
    }
    if(dp[x][y]!=-1){
        return dp[x][y];
    }
    dp[x][y]=0;
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx<=N&&ny<=M&&nx>0&&ny>0){
            if(a[x][y]>a[nx][ny]){
                dp[x][y]+=dfs(nx,ny);
            }
        }
    }
    return dp[x][y];
}

int main()
{
    cin>>M>>N;
    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            cin>>a[j][i];
            dp[j][i]=-1;
        }
    }
    dfs(1,1);
    cout<<dp[1][1];

    return 0;
}
