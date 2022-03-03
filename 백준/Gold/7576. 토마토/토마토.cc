#include <bits/stdc++.h>

using namespace std;
int n,m,tomato;
int a[1001][1001];
int check[1001][1001];
int dx[]={1,-1,0,0},dy[]={0,0,1,-1},day;
typedef struct st{
    int x;
    int y;
}st;
queue<st> q;

void bfs(){
    while(!q.empty()){
        int x1 = q.front().x;
        int y1 = q.front().y;
        q.pop();
        for(int i=0;i<4;i++){
            int xx = x1+dx[i];
            int yy = y1+dy[i];
            if(xx>=1&&yy>=1&&xx<=m&&yy<=n){
                if(check[xx][yy]==0&&a[xx][yy]==0){
                    q.push({xx,yy});
                    check[xx][yy] = check[x1][y1]+1;
                    day = check[xx][yy];
                    tomato--;

                }
            }
        }

    }

    if(tomato == 0){
        cout<<day -1;
    }
    else
        cout<<-1;

}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                check[i][j]=1;
                q.push({i,j});
            }
            if(a[i][j]==0){
                tomato++;
            }

        }
    }
    if(tomato == 0){
        cout<<0;
    }
    else bfs();
    return 0;
}
