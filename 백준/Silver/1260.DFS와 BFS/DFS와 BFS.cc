#include <bits/stdc++.h>
using namespace std;

vector<int> p[1001];
int check [1001];
int check1[1001];
int n,m,v;

void s(){
    for(int i=1;i<=n;i++){
        sort(p[i].begin(),p[i].end());
    }
}


void dfs(int start){
    cout<<start<<' ';
    check[start]=1;
    for(int i=0;i<p[start].size();i++){
        int x = p[start][i];
        if(check[x]==0){
            dfs(x);
        }
    }
}



void bfs(int start){
    queue<int> q;
    q.push(start);
    check1[start]=1;
    cout<<start<<' ';
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<p[x].size();i++){
            int xx = p[x][i];
            if(check1[xx]==0){
                check1[xx]=1;
                q.push(xx);
                cout<<xx<<' ';
            }
        }
    }
}

void solve(){
    s();
    dfs(v);
    cout<<'\n';
    bfs(v);

}


int main()
{
    cin>>n>>m>>v;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
    solve();
    return 0;
}
