#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int c[25][25];
int cnt=0,dx[]={1,-1,0,0},dy[]={0,0,1,-1};
vector<int> t;
int a,b,cnt1=0;
void dfs(int x,int y){
    c[x][y]=0;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<a&&ny<a&&nx>=0&&ny>=0){
            if(c[nx][ny]==1){
                dfs(nx,ny);
                cnt++;
            }
        }
    }
}



void solve(){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(c[i][j]==1){
                dfs(i,j);
                cnt1++;
                t.push_back(cnt);
                cnt=0;
            }
        }
    }

    sort(t.begin(),t.end());
    cout<<cnt1<<'\n';
    for(int i=0;i<t.size();i++){
        cout<<t[i]+1<<'\n';
    }
}
int main()
{
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%01d",&c[i][j]);
        }
    }

    solve();
    return 0;
}
