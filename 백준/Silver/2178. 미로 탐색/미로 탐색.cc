#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[101][101];
int chk[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int bfs(){
    queue<pair<int,int>> q;
    q.push(make_pair(1,1));
    chk[1][1] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(x==N && y==M){
            return chk[x][y];
        }
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<=N&&ny<=M&&nx>=0&&ny>=0){
                if(arr[nx][ny]== 1 && chk[nx][ny]==0){
                    chk[nx][ny] = chk[x][y] + 1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }


}


void solve(){
    int answer = bfs();
    cout << answer;
}
int main()
{
    cin>>N>>M;
    for(int i=1;i<=N; i++){
        for(int j=1;j<=M;j++){
            scanf("%01d",&arr[i][j]);
        }
    }
    solve();


    return 0;
}
