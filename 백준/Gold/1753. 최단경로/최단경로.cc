#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;

priority_queue<pair<long long int,int>,vector<pair<long long int, int>>,greater<pair<long long int, int>>> q;
int N,M;
int start;
long long int Distance[20001];
bool check[200001];
vector<pair<int,int>> connect[200001];

void reset_Distance(){
    for(int i=1;i<=N;i++){
        Distance[i] = INF;
    }
}

void solve(){
    reset_Distance();
    memset(check, false, sizeof(check));
    Distance[start]=0;
    q.push(make_pair(Distance[start],start));
    while(!q.empty()){
        int x = q.top().second;
        int cost = q.top().first;
        q.pop();
        check[x]=true;
        for(int i=0;i<connect[x].size();i++){
            int xx = connect[x][i].first;
            int Cost = connect[x][i].second;
            if(!check[xx] && Distance[xx]> Distance[x]+Cost){
                Distance[xx] = Distance[x]+Cost;
                q.push(make_pair(Distance[xx],xx));
            }
        }
    }
    for(int i=1;i<=N;i++){
        if(Distance[i]!=INF){
            cout<< Distance[i]<<"\n";
        }
        else cout<<"INF"<<"\n";
    }
}

int main()
{
    cin>>N>>M;
    cin>>start;
    for(int i=1;i<=M;i++){
        int x, y, cost;
        cin>>x>>y>>cost;
        connect[x].push_back(make_pair(y,cost));
    }
    solve();

}
