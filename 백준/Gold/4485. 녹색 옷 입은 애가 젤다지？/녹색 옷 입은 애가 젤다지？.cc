#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;

int a[126][126];
int check[126][126];
int rupee[126][126];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int N=1,C=1;
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;

void reset_R(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            rupee[i][j] = INF;
        }
    }
}

void solve(){
    reset_R();
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
                if(!check[xx][yy]&&rupee[xx][yy]>rr){
                    rupee[xx][yy] = rr;
                    q.push(make_pair(rupee[xx][yy],make_pair(xx,yy)));
                }
            }

        }
    }
}


int main()
{

    while(1){
        cin>>N;
        if(N==0){
            return 0;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>a[i][j];
            }
        }
        solve();
        cout<<"Problem "<<C<<": "<<rupee[N-1][N-1]<<'\n';
        C++;

    }

    return 0;
}
