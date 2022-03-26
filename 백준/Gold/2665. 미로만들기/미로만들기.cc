#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;

int a[51][51];
int check[51][51];
int wall[51][51];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int N=1,C=1;
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;

void reset_wall(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            wall[i][j] = INF;
        }
    }
}

void solve(){
    reset_wall();
    memset(check,0,sizeof(check));
    q.push(make_pair(a[0][0],make_pair(0,0)));
    while(!q.empty()){
        int x1 = q.top().second.first;
        int y1 = q.top().second.second;
        int r = q.top().first;
        q.pop();
        for(int i=0;i<4;i++){
            int xx = x1+dx[i];
            int yy = y1+dy[i];
            if(xx>=0&&yy>=0&&xx<N&&yy<N){
                int rr=r+a[xx][yy];
                if(!check[xx][yy]&&wall[xx][yy]>rr){
                    wall[xx][yy] = rr;
                    q.push(make_pair(wall[xx][yy],make_pair(xx,yy)));
                }
            }

        }
    }
}


int main()
{
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%1d",&a[i][j]);
            if(a[i][j]){
                a[i][j]=0;
            }
            else a[i][j]=1;
        }

    }
    solve();
    cout<<wall[N-1][N-1];
    return 0;
}
