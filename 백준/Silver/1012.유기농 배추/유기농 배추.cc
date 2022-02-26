#include <bits/stdc++.h>
using namespace std;

int arr[51][51];
int V[51][51];
int t,k,m,n;
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};
int cnt=0;

void dfs(int x,int y){
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx<=n&&ny<=m&&ny>0&&nx>0){
            if(V[nx][ny]==0&&arr[nx][ny]==1){

                V[nx][ny]=1;
                dfs(nx,ny);
            }
        }
    }
}

void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]==1 && V[i][j]==0){
                //cout << i << " " << j << "\n";
                
                V[i][j] = 1;
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt<<'\n';

}

int main()
{
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>m>>n>>k;
        for(int j=0;j<k;j++){
            int x,y;
            cin>>x>>y;
            arr[y+1][x+1]=1;
        }

        solve();
        cnt = 0;
        memset(arr,0,sizeof(arr));
        memset(V,0,sizeof(V));
    }


    return 0;
}
