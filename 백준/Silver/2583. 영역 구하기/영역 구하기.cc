#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int M,N,K,arr[101][101],cnt=0,dx[]={1,-1,0,0},dy[]={0,0,1,-1};
vector<int> v;
int x,y,x1,y1;
void dfs(int x,int y)
{
    arr[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0&&ny>=0&&nx<N&&ny<M){
            if(arr[nx][ny]==0){
                cnt++;
                dfs(nx,ny);
            }
        }
    }

}

int main()
{
    cin>>M>>N>>K;
    for(int i=0;i<K;i++){
        cin>>x>>y>>x1>>y1;
        for(int j=x;j<x1;j++){
            for(int l=y;l<y1;l++){
                arr[j][l]=1;
            }
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]==0){
                dfs(i,j);
                v.push_back(cnt+1);
                cnt=0;
            }

        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i] << " ";
    }
    return 0;
}
