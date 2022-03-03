#include <bits/stdc++.h>

using namespace std;

int N,arr[101][101],chk[101][101],dx[]={1,-1,0,0},dy[]={0,0,1,-1};
int cnt=0,ans=0;
int max_high, min_high= 9999;

void dfs(int x,int y,int h){
    chk[x][y]=1;
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx>=0&&ny>=0&&nx<N&&ny<N){
            if(arr[nx][ny]>h&&chk[nx][ny]==0){
                dfs(nx,ny,h);
            }
        }
    }
}

int main()
{
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
            max_high = max(max_high, arr[i][j]);
            min_high = min(min_high, arr[i][j]);
        }
    }
    for(int i=0;i<=max_high;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(arr[j][k]>i&&chk[j][k]==0){
                    cnt++;
                    dfs(j,k,i);
                }
            }
        }
        memset(chk,0,sizeof(chk));
        if(ans<cnt){
            ans = cnt;
        }
        cnt=0;
    }
    cout<<ans;


    return 0;
}
